🚗 Parking Garage Simulator (C++)

A console-based Parking Garage Simulator implemented in C++, modeling the core entities and workflows of a real-world parking garage using object-oriented design.

📁 Project Structure
```
Parking_Garage_Simulator/
│
├── Garage.cpp / Garage.h        # Manages the overall garage logic
├── ParkingLot.cpp / ParkingLot.h# Represents parking lots within the garage
├── ParkingSlot.cpp / ParkingSlot.h # Individual parking slot abstraction
├── Vehicle.cpp / Vehicle.h      # Vehicle representation
├── Ticket.cpp / Ticket.h        # Parking ticket handling
├── Valet.cpp / Valet.h          # Valet operations and coordination
│
├── Parking_Garage_Simulator.cpp # Main entry point
│
├── Debug/                        # Build artifacts (generated)
├── *.vcxproj*                   # Visual Studio project files
├── pch.cpp / pch.h              # Precompiled headers
```
⚙️ Features

Object-oriented design with clear separation of responsibilities

Simulates vehicle entry, parking allocation, ticketing, and exit flow

Models real-world components like Garage, Parking Lot, Slots, Valet, and Tickets

Built using Visual Studio C++ project structure

▶️ How to Run

Open Parking_Garage_Simulator.vcxproj in Visual Studio

Build the solution

Run Parking_Garage_Simulator.cpp

🛠 Tech Stack

Language: C++

IDE: Visual Studio

Concepts: OOP, class design, header/source separation
