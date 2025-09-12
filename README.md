# Parking-Radar-with-Arduino

## Description  
This project is a simple parking assistant using an HC-SR04 ultrasonic sensor, a piezo buzzer, and an LED, all controlled by an Arduino Nano.  
The system measures the distance to nearby obstacles and alerts the driver using sound and light signals based on how close the object is.

## Components  
- Arduino Nano  
- HC-SR04 Ultrasonic Sensor  
- Piezo Buzzer  
- LED  
- Resistor (for LED)  
- Breadboard  
- Jumper wires  

## How It Works  
- When an object is **closer than 15 cm**, the LED turns on and the buzzer emits a **high-pitched tone**.  
- When the object is **between 15 cm and 30 cm**, only the buzzer sounds with a **lower-pitched tone**.  
- When the object is **further than 30 cm**, both the LED and buzzer are off.

## Circuit Diagram  
A schematic is available in the `Schematics/` folder.

## Code  
The Arduino code is available in the `code/` folder. Here's the main program:
