# Flight Computer PCB
This is the fourth iteration of a flight computer designed to be used in a thrust vectoring rocket. The flight computer is a 4 layer PCB - Signal, Ground, Power, Signal, and it is programmed with a micro USB.  

Big thanks to PCBWay (https://www.pcbway.com/) for sponsoring this project - I couldn't have done this without their support! PCBWay has great customer service, the ordering process is very streamlined and intuitive, and they make sure to update you every step of your order, ensuring a worry-free experience. Their manufacturing is also very high quality, with countless customization options to suit your PCB needs. Best of all though, PCBWay is very involved with the PCB design community as they have contests with lots of cash prizes and also sponsor many projects such as my own. I'd heavily recommend using PCBWay the next time you need a PCB to get manufactured!

Picture of the PCB:  
<img src="https://github.com/usedgenes/Flight-Computer-PCB/blob/main/V4/PCB%20Picture.JPG" width=30% height=30%>

Components List:
* ESP32-WROOM
* BMP388 Altimeter
* SD Card Reader
* LIS3MDLTR Magnetometer
* BMI088 IMU
* LSM6DSOXTR IMU

User Interface:
* Piezoelectric Buzzer
* 2 Controllable LEDs
* 4 Servo Outputs
* 1 ESC Output

Power Supply:
* The flight computer is designed to use a 2S 7.4V Li-Po battery as the power supply
* The raw battery powers the servos, while the sensors and ESP32 receive 3.3V from an AMS1117-3.3 that regulates the battery voltage
* There is a red LED to signal if the board is on or not
* There is also the option to use a voltage divider so the ESP32 is able to estimate the battery voltage

Schematic:
![](https://github.com/usedgenes/Flight-Computer-PCB/blob/main/V4/Schematic_Flight-Computer-V5_2024-09-07.png)

PCB:  
![](https://github.com/usedgenes/Flight-Computer-PCB/blob/main/V4/PCB_PCB_Flight-Computer-V5_2024-09-07.png)
 






