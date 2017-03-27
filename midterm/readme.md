# Midterm Project Ideas

## Idea 1: Blooming Flower Nightlight
The blooming flower is a nightlight that will read the amount of light in a room. As light increases in a room the flower petals will begin to close and the light from the LEDs will dim. When light is removed from a room the petals will begin to open and the light from the LEDs will increase.  

This project would be based off of this [example](https://create.arduino.cc/projecthub/circuito-io-team/valentine-s-sunflower-3cdd90). The differentiating factors of this project would be the LED lights and the way the flower works. The flower I would create would work exactly the opposite of the one in the example and would have lights so it would function as a nightlight.

![Flower Nightlight Sketches](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2552.JPG)

## Code Plan

### Turn On device
* Read On/Off Switch

#### Components
* On/Off Switch
* Power Cable

### Sense light
* Read Photoresistor

#### Components
* photoresistor

### Open petals
* Amount of Light Decreases
* Petals Begin to Open
* LEDs Turn on And Brighten

#### Components
* 9g servo motor
* LEDs
* Resistors
* Photoresistor

### Close petals
* Amount of Light Increases
* Petals Begin to Close
* LEDs Turn on and Brighten

#### Components
* 9g servo motor
* LEDs
* Resistors
* Photoresistor

## V2
This is a component that might be included in version 2. When the LEDs are turned on, different buttons can be pressed to initiate different blink patterns.

### Light Patterns
* Read Photoresistor
* If light is low
* Read Buttons
* If Button 1 is on
* Blink 250ms second delay
* If Button 2 is on
* Blink 500ms second delay
* If Button 3 is on
* Blink 750ms second delay

#### Components
* LEDs
* Resistors
* Photoresistor


## Idea 2: Automated Tea Steeper
Using the Tea Steeper users will be able to set an amount of time they would like to steep their tea for. After inputing their desired time the user will place the tea on the devices mechanical arm. Below the tea the user will place mug with hot water. Once the mug is in place the user can press a start button and the tea will be lowered into the water. After the tea is steeped the mechanical arm will rise and a noise will alert the user that the tea is done. When the tea is done the device will rotate and the mechanical arm will place the used tea onto an awaiting bowl.

This project would be based off of this [example](http://digitaljunky.io/make-an-automated-tea-steeper-with-arduino/). The differentiating factor of this project would be the rotating of the device to place the used tea into a bowl.

![Automated Tea Steeper Sketches](https://github.com/sarahkasiske/physical-computing/blob/master/midterm//images/IMG_2551.JPG)

## Code Plan

### Turn On device
* Read On/Off Switch

#### Components
* On/Off Switch

### Set Time
* Read Potentiometer
* Set the Time to Steep Based on the position of the Potentiometer Axis

#### Components
* Potentiometer
* 3X wires to connect to ground, power and analog A0

### Initiate Tea Steeping  
* Read Push button
* Turn on Green LED
* Lower Mechanical Arm
* Count Down

#### Components
* Push Button
* Green LED
* 270ohms Resistor
* 9g servo motor
* Mechanical Arm
* 10kohms resistor

#### End Tea Steeping
* Read End of Count Down
* Raise Mechanical Arm
* Turn Off Green LED
* Turn On Red LED
* Sound Piezo buzzer
* Rotate device 180 degrees
* Lower Mechanical Arm

#### Components
* Piezo buzzer
* 330ohms Resistor
* Red LED
* 270ohms Resistor
* Mechanical Arm
* 2x 9g servo motor

# Blooming Flower Nightlight

## Prototype

After choosing to create the Blooming Flower Nightlight I began prototyping how the light would function. I used an upside down pot as the base of the light and repurposed a blooming birthday candle to work as the flower. To test how a servo motor could open and close the flower I conected the flower to a wire that and attatched it to a servo motor. I then coded the servo motor to go between 90 and 180 degrees, opening and closing the flower. Creating the initial prototype helped me to understand how the mechanics of the flower might work.

[View the prototype](https://www.youtube.com/watch?v=_JmOw5330_s&feature=youtu.be)

## Building the Structure

The next step in my process was building the structure of the nightlight. I decided to keep the structure by creating a pixel shaped flower keeping the petals square. The structure was created from pieces of cut bamboo that I glued together with a hot glue gun. I added LEDs to the petals by placing each LED in a hole drilled through pieces of wood attatched to the center of the petals. I wire wrapped the led and ran the wires through the center of the flower and down the stem to connect to the Arduino.

[View the initial structure](https://www.youtube.com/watch?v=0noUp61uDDs)

When the structure was complete I wrapped the petals in purple tool to make them look more like flower petals.

![Flower Nightlight With Petals Attatched](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2647.JPG)


## Working With LEDs

After the structure was complete I began wiring the LEDs to the Arduino. I first connected the LEDs and made sure they were working. When the LEDs were in place I wired in a photoresister to turn the LEDs on and off depending on the lighting.

[View the LEDs in Action](https://www.youtube.com/watch?v=ZOUbKCHR_SE)

![Flower Nightlight With Working LEDs](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2674.JPG)

## Closing and Opening Petals

With working LEDs I began working on the mechanics needed to open and close the flower petals. to allow the petals to open and close I cut up a headband and stiched pieces of it between the petals and the center of the flower. In order to attach the pieces of headband to the petals I had to remove the tool covering the petals.

![Headband, Needle and Thread](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2748.JPG)

![Headband, Attached to the Flowers Petals](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2747.JPG)

I then wrapped wire around the top of each petal connecting them to a servo motor to open and close them. I quickly realized one servo motor would not be able to open all of the petals. When all of the wires were connected to one motor the angle of the wire was too sharp to open the petals. Because I did not have enough servo motors for each for of the petals I tried connecting just one to see if I could get the servo motor to work. 

![Servo Motor Connected to Aduino](https://github.com/sarahkasiske/physical-computing/blob/master/midterm/images/IMG_2743.JPG)

I tried to open and close the petals first with a Tower Pro SG 5010 servo motor. I am not sure exactly why but I was not able to get the servo motor to work. The setup I had worked perfectly with a less powerful motor but when I wired in the stronger motor it would not work. Unfortunetly, the less powerful potor was not strong enough to open the petal so I decided to add that functionality at a later date.

## Turning the Light On and Off

The final functionality that I added to the nightlight was a way to turn it on and off. I used a potentiometer to control when the light turns on and off. I also used the potentiometer to dim the lights my turning them off one by one. After adding the functionality to turn the light on and off I wrapped the petals in tulle and added some final touches to the design. 

## Final Nightlight

![View the Nightlight](https://www.youtube.com/watch?v=PmCe5H65ES8




