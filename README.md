# BE_project
# Platform used: Arduino IDE, Catia V5, Ansys Mechanical

Emergency Fire Protection System using Arduino UNO deals with emergencies like fire outbreaks, our
automobile System will detect the fire flames and try to overcome them with an automatic water-spraying nozzle pump
which we have programmed using the Arduino UNO IDE platform, along with that we have used a motor driver to
operate our drive motors and flame sensor to detect fire within a 30cm range which are all controlled by Arduino
UNO.

# Attached Files : 
1. Documentation of BE project (Black Book)
2. Code of Arduino UNO


# Summary and flow of Arduino Code :
This Arduino code is designed to control a system based on a flame sensor. The system has eight relays (relay1 to relay8), a pump, and a main arm. Here's a brief summary:

# 1. Initialization:
Pins are defined for LEDs, relays, and the flame sensor.
The baud rate is set for serial communication.
The initial state of all relays is set to HIGH.
# 2. Setup:
Pins are set as OUTPUT for relays and INPUT for the flame sensor.
The initial state of all relays is set to HIGH.
# 3. Main Loop:
Read the flame sensor's state.
If the flame is detected (flame_pin is LOW), execute a sequence to stop forward motion, turn on the pump, and manipulate the main arm in a specific pattern.
If no flame is detected, turn off the water pump and allow forward motion.

