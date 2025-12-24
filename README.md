# Seatbelt Warning and Alert System for Passenger Cars

This project implements a **Seatbelt Warning and Alert System** using **Arduino Uno microcontrollers** and **CAN (Controller Area Network) communication**.  
The system ensures seatbelt compliance by monitoring seat occupancy and seatbelt status, providing real-time audio-visual alerts.

---

## 📌 Project Overview

Seat belt compliance is a critical vehicle safety requirement.  
This project simulates a real-world automotive safety system using a **dual-node CAN architecture**, where sensor data is transmitted from a **Sensor Node** to a **Controller Node**.

If the seat is occupied and the seat belt is not fastened, the system activates a **buzzer** and displays warning messages on an **LCD**.

---

## 🎯 Objectives

- Detect seat occupancy and seatbelt status
- Implement CAN communication between two ECUs
- Provide real-time alerts using buzzer and LCD
- Simulate automotive-grade safety systems using low-cost components

---

## 🧰 Hardware Components

- Arduino Uno (2)
- MCP2515 CAN Module (2)
- Force Sensor (Seat Occupancy)
- Push Button / Relay (Seatbelt Detection)
- 16x2 LCD with I2C Module
- Buzzer
- Jumper Wires & Resistors

---

## ⚙️ System Architecture

### Sensor Node (Slave)
- Reads seat occupancy and belt status
- Transmits data via CAN bus

### Controller Node (Master)
- Receives CAN data
- Displays seatbelt status on LCD
- Activates buzzer when required

---

## 📡 CAN Message Protocol

| Byte | Parameter       | Values |
|-----:|----------------|--------|
| 0    | Seat Status     | 0x00 = Vacant, 0x01 = Occupied |
| 1    | Belt Status     | 0x00 = Unfastened, 0x01 = Fastened |

---

## 🧠 Software & Tools Used

- Arduino IDE
- Embedded C / Arduino Programming
- MCP2515 CAN Library
- LiquidCrystal_I2C Library

---

## 📂 Repository Structure

- `Code/` – Arduino CAN transmitter and receiver code  
- `Documentation/` – Complete project report  
- `Circuit_Diagrams/` – Architecture, circuit, flowchart  
- `Images/` – Final hardware setup and output images  

---

## 🚀 Applications

- Passenger vehicle safety systems
- Automotive embedded systems
- CAN-based ECU communication
- Smart transportation systems
