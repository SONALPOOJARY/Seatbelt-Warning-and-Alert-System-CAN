#include <SPI.h>	//Library for using SPI Communication
 
#include <mcp2515.h>	//Library for using CAN Communication (https://github.com/autowp/arduino-mcp2515/)
 
struct can_frame canMsg; MCP2515 mcp2515(10);
int seat = 0; #define buttonpin 7 void setup()
{
 
pinMode(buttonpin, INPUT); while (!Serial); Serial.begin(9600);
SPI.begin();	//Begins SPI communication mcp2515.reset();
mcp2515.setBitrate(CAN_500KBPS, MCP_8MHZ); //Sets CAN at speed 500KBPS and Clock 8MHz
 
mcp2515.setNormalMode();
 
}
 
void loop()
 
{
 
int sensorValue = analogRead(A0); int belt = digitalRead(buttonpin); if(sensorValue > 20)
 
seat = 1; else
seat = 0;
 
canMsg.can_id	= 0x036;	//CAN id as 0x036
 
canMsg.can_dlc = 8;	//CAN data length as 8
 
canMsg.data[0] = seat;	//Update humidity value in [0]
 
canMsg.data[1] = belt;		//Update temperature value in [1] canMsg.data[2] = 0x00;	//Rest all with 0
canMsg.data[3] = 0x00; canMsg.data[4] = 0x00; canMsg.data[5] = 0x00; canMsg.data[6] = 0x00; canMsg.data[7] = 0x00;
mcp2515.sendMessage(&canMsg); //Sends the CAN message delay(500);
}
 
