CONTENTS OF THIS FILE

 * Introduction
 * Requirements
 * Installation
 * Coding
 * Inspiration
 

INTRODUCTION:
In this project i used a motion gesture to trigure an alarm so that we can know someone passes our door or any other area in which we set our motion detector. Along with the alarm i aslo added an led just to make it more robust.It can detect motion upto 6 meters with the help of our PIR sensor.It has many uses you can put it in your door to see if someone is coming or not. 


REQUIREMENTS:

you will need following materials to make one:
1. Arduino uno 
2. jump wires
3.PIR motion senor
4. LED
5. SPEAKER
6. 2.2 K resistor
7. Breadboard


INSTALLATION:

* First if we look at the pir motion sensor there are 3 pins on it 
1.OUTPUT
2.GND
3.VCC


OUTPUT:
this is the motion input pin and from this pin we can detect the motion.we are going to connect it  to the analog input in the arduino.

GND:
we are going to connect the Ground pin to the ground

VCC:
this is the positive power pin and it is connected to the 5V supply

* Second,SPEAKER
we are going to connect the longer leg of the speaker to the pin 12 on the arduino and the other to the ground

* Third,LED
so the positve end goes to the pin 10 and the other end connected to the ground through 2.2 ohm resistor.
and with all this our installation is done.


CODING:
At first we have to assing the motionpin to the analog input,ledpin and speakerpin to the digital input on the arduino.
next we have to set the motionsensvalue to 0 so that we can see the change in value.after that we are going to set the analog pins and digital pins to output with the help of pinmode
following that we are checking the value in the void loop if the value is greater than the value we write in the code the led and the speaker will trun onn and after some time it will turn off.


INSPIRATION:
https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/


MADE BY:
Dighvijay Singh








