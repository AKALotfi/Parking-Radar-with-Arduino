# Parking-Radar-with-Arduino
## Descrption
This project is a simple parking assistant using an HC-SR04 ultrasonic sensor, a LED pin and a buzzer (Piezo Buzzer) with an Arduino Nano.
The system detects obstackes and alerts the driver with sound and light signals depending on the distance.

## Components:
- Arduino Nano
-HC-SR04 Ultrasonic Sensor
-Piezzo Buzzer
-LED pin
-Resistor 

## A schematic is available in the Schematics/ file.

## Code
The code is available in the code/ folder. when the obstacle is at a distance of 15 centimeters, the LED pin will turn on & the Buzzer will beep, between 15 and 30 centimeters, only the buzzer will beep at a different tone.
