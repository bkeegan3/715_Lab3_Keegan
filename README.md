# 715_Lab3_Keegan

## Requirements
1. Measure the speec of a brushless motor as revolutions per minute using an IR Emitter Dector pair processed on an arduino
2. The software infrastructure can be implemented either with a Round Robbin with Interrupts or a Function Queue Schedluing architecture.
3. The capture RPM over time need to be download to a host and then plotted over time.


## Design
### Hardware
For the hardware I used the IR Emitter/Detector pair as well as another LED to signal when the rpm_ISR was executed
![]() 
| Arduino Pins  |                   |
| ------------- | ------------------|
| Digital 10    | LED YLW           |
| Digital 13    | LED RED           |
| Digital 2     | DHT-2             |
| 5V            | DHT-1             |
| GND           | DHT-4             |



---
### Software
For software I followed the lab instructions and used a Round Robbin with Interrupts design. I reused a good chunk of the CMPalmer software that was provided. That code works have an intterupt attached to the photodiode pin increment everytime there is a falling interrupt. The main loops then takes that rpmcount and converts it to RPM. To acheive the download to host I just had the software spit out the rpm value over the serial port and logged that twith Teraterm. 


Libraries used
None

[Software](https://github.com/bkeegan3/715_Lab3_Keegan/blob/master/Lab3.ino)

## Temperature Plot
![]()

## Video
[![]()
