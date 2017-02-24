#Midterm Project Ideas

##Idea 1: Blooming Flower Night Light
The blooming flower is a night light that will read the amount of light in a room. As light increases in a room the flower petals will begin to close and the light from the LEDs will dim. When light is removed from a room the petals will begin to open and the light from the LEDs will increase.  

This project would be based off of this [example](https://create.arduino.cc/projecthub/circuito-io-team/valentine-s-sunflower-3cdd90). The differentiating factors of this project would be the LED lights and the way the flower works. The flower I would create would work exactly the opposite of the one in the example and would have lights so it would function as a nightlight.

####Components
* LEDs
* Resistors
* photoresistor
* 9g servo motor

##Idea 2: Automated Tea Steeper
Using the Tea Steeper users will be able to set an amount of time they would like to steep their tea for. After inputing their desired time the user will place the tea on the devices mechanical arm. Below the tea the user will place mug with hot water. Once the mug is in place the user can press a start button and the tea will be lowered into the water. After the tea is steeped the mechanical arm will rise and a noise will alert the user that the tea is done. When the tea is done the device will rotate and the mechanical arm will place the used tea onto an awaiting bowl.

This project would be based off of this [example](http://digitaljunky.io/make-an-automated-tea-steeper-with-arduino/). The differentiating factor of this project would be the rotating of the device to place the used tea into a bowl.

##Code Plan
User sets the amount of time they would like their tea to steep for.

###Turn On device
* Read On/Off Switch

####Components
* On/Off Switch

###Set Time
* Read Potentiometer
* Set the Time to Steep Based on the position of the Potentiometer Axis

####Components
* Potentiometer
* 3X wires to connect to ground, power and analog A0

###Initiate Tea Steeping  
* Read Push button
* Turn on Green LED
* Lower Mechanical Arm
* Count Down

####Components
* Push Button
* Green LED
* 270ohms Resistor
* 9g servo motor
* Mechanical Arm
* 10kohms resistor

####End Tea Steeping
* Read End of Count Down
* Raise Mechanical Arm
* Turn Off Green LED
* Turn On Red LED
* Sound Piezo buzzer
* Rotate device 180 degrees
* Lower Mechanical Arm

####Components
* Piezo buzzer
* 330ohms Resistor
* Red LED
* 270ohms Resistor
* Mechanical Arm
* 2x 9g servo motor
