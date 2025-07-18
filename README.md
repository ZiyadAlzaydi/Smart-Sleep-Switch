# Smart-Sleep-Switch
This project simulates a smart latching power switch using an Arduino Uno, a pushbutton, a PIR motion sensor, and an LED. It combines manual control and automatic shutdown functionality for power-saving applications.
With a single push of a button, the system turns ON. A second push turns it OFF manually. If no movement is detected for 10 seconds, the system automatically shuts off — preventing unnecessary power consumption.
<img width="759" height="622" alt="2025-07-18" src="https://github.com/user-attachments/assets/564f663e-1416-4c75-9c8d-b2f0b1a84a84" /> 

How It Works:

 Press Button Once → LED turns ON (circuit is active).

 Press Button Again → LED turns OFF (manual shutdown).

 While ON, the PIR sensor resets the auto-off timer when it detects motion.

If no motion is detected for 10 seconds, the circuit automatically powers off.

Components Used:

Arduino Uno

Pushbutton 

PIR Motion Sensor

LED

220Ω Resistor (for LED)

10KΩ Resistor (for the pushbutton)

Breadboard & Jumper Wires

Key Features:

Toggle ON/OFF with a single pushbutton

Motion-activated timeout reset

Automatic power-off after 10 seconds of inactivity

Energy-saving design using passive infrared sensing

Applications:

Smart lighting systems

Energy-efficient room monitoring

DIY home automation

Automatic shelf or cabinet lighting




