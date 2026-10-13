# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Lab 2: Reflectance Sensor Lab
### Thomas Anderson / Abraham Santiago
---
<details><summary>The Reflectance Sensor lab interfaces with the following:</summary>

* User LEDs of the TI MSP432 LaunchPad
* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)
</details>

<details>
<summary><h2>Prelab Questions</h2></summary>

1. <b>What does a reflectance sensor consist of? How many reflectance sensors are on the QTRX Reflectance Sensor Array? What is its operating voltage?</b>    
A reflectance sensor consists of an LED and phototransistor. The QTRX Reflectance Sensor Array consists of eight reflectance sensors. The operating voltage is 5V.

2. <b>Which control pins on the QTRX Reflectance Sensor Array are responsible for enabling the reflectance sensors? What is their default value after powering on the sensor array? List the pin names and the pin numbers used to connect the two control pins.</b>    
P5.3 controls the even sensors and P9.2 controls the odd. The default value is off (0). The pin names are "Reflectance Sensor Ctrl Even" and "Reflectance Sensor Ctrl Odd".

3. <b>Write a void function named P5_0_and_P9_7_Init that takes no arguments and configures the P5.0 and P9.7 pins as output GPIO pins. Initialize the value of the P5.0 and P9.7 pins to zero.</b>    
```
void P5_0_and_P9_7_Init(void)
{
    P5->SEL0 &= ~(0x01)
    P5->SEL1 &= ~(0x01)
    P5->DIR |= (0x01)
    P5->OUT &= ~(0x01)

    P9->SEL0 &= ~(0x80)
    P9->SEL1 &= ~(0x80)
    P9->DIR |= (0x80)
    P9->OUT &= ~(0x80)
}
```

4. <b>Write a void function named Print_Binary</b>    
(Included as file in repository.)
</details>

<details>
<summary><h2>Overview</h2></summary>

This lab serves as an introduction into the reflective sensors used on the car, and is a stepping stone towards setting up the fully operational rover.
</details>

<details>
<summary><h2>Components</h2></summary>
  
<b>Description</b> | <b>Quantity</b> | <b>Manufacture</b>
--- | --- | ---
MSP432 LaunchPad | 1 | Texas Instruments
USB-A to Micro-USB Cable | 1 | N/A
TI-RSLK MAX Chassis | 1 | Pololu
8-Channel QTRX Sensor Array | 1 | Pololu
</details>






<details>
<summary><h2>Theory</h2></summary>

<b>Key Concepts</b>
---

<details>
<summary><b>Reflectance Sensor Array</b></summary>

This lab is primarily about the reflective sensor array. This device is made up of LEDs illuminating the ground and phototransistors detecting how much light the ground reflects. This allows the array to send data of the color below it, allowing for the detection of lines for a maze. There are eight sensors in the array and each independently sends data on the reflectance of the ground below it. This allows for a program to identify where a line is in relation to the device and use this information to modify the direction of travel. In this lab the program will identify different states of the eight sensors and react with unique outputs for each detection.

</details>

</details>

<details>
<summary><h2>Analysis and Results</h2></summary>

This lab did not call for any specific results to be included besides the demonstrations completed in lab. 

</details>

<details>
<summary><h2>Know Issues or Limitations</h2></summary>

We gained a thorough understanding of all the concepts in the lab and successfully demonstrated the entire lab working without bugs.    
<b>This lab was a complete success.</b>
</details>

<details>
<summary><h2>Author Contribution</h2></summary>

We both completed every component of the lab and worked on the report together.    
</details>

<details>
<summary><h2>References</h2></summary>

[MSP432P401R SimpleLink Microcontroller LaunchPad Development Kit User's Guide](https://docs.rs-online.com/3934/A700000006811369.pdf)

[MSP432P401R Datasheet](https://www.ti.com/lit/ds/slas826e/slas826e.pdf)

[Robot Systems Learning Kit (TI-RSLK) User Guide](https://www.ti.com/lit/pdf/sekp166)

[MSP432P4xx SimpleLink Microcontrollers Technical Reference Manual](https://web.archive.org/web/20200402132841/http:/www.ti.com/lit/ug/slau356i/slau356i.pdf)

[8-Channel QTRX Sensor Array Product Page](https://www.pololu.com/product/3672)
