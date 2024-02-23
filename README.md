# Synchrony
A device to test the synchrony of stepper motors. Designed and simulated to get the expected output, this device holds the potential to perform several tests over and over again once set up and calibrated properly. A custom Motor driver shield is what makes this product very reliable.  All the required files, codes, schematics, 3D model and an Instruction manual has been provided 

Getting Started:
1) Mount the Motor Driver Shield on Arduino MEGA.
2) Connect the potentiometers to the A0,A1,A2 pin headers on the shield
3) Upload the code to Arduino MEGA.
4) Plug in the wires of the stepper motors
5) Power up the Shield (12v 2.4A) 
6) System is ready for Testing

Working
1) Once the setup is done, Power up the device.
2) You will see the LCD light up, initializing the system.
3) Move the racks of each motor to your desired position 
4) These changes are recorded by the encoders.
5) By pressing the push-buttons, each stepper motor now will reset the racks back to its home position.
6) Conduct tests such as speed and Torque of these motors.
7) SW5 Stops all the motors.
8) Since this device is programmable,You can write your own code to conduct different tests.

Arduino Code is under the file name " Arduino-code.c" 

The Schematics for the PCB has also been uploaded.

Parts to buy for the the project:
1) Arduino MEGA x1
2) 5 turns 10k Potentiameter x3
3) Push Buttons x5
4) Electrolitic Capaciter 47uF x3
5) A4988 Stepper motor Driver x3
6) 16x2 LCD Display x1
7) Potentiameter for LCD Display x1
8) Jack power port x1
9) Pin Headers (According to need)


