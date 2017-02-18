/*
  Arduino Starter Kit example
 Project 4  - Color Mixing Lamp
 */

//assign pins to LED
const int greenLEDPin = 9;    
const int redLEDPin = 10;     
const int blueLEDPin = 11;    

//assign pins to photoresistor
const int redSensorPin = A0;  
const int greenSensorPin = A1;   
const int blueSensorPin = A2;   

// Set color values 
int redValue = 0; 
int greenValue = 0; 
int blueValue = 0; 

int redSensorValue = 0; 
int greenSensorValue = 0; 
int blueSensorValue = 0; 

void setup() {
  // start serial monitor 
  Serial.begin(9600);

  // set pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // Read the sensors first:

  // read the red photoresistor value 
  redSensorValue = analogRead(redSensorPin);
  // give the ADC a moment to settle
  delay(5);
  // read the green photoresistor value 
  greenSensorValue = analogRead(greenSensorPin);
  // give the ADC a moment to settle
  delay(5);
  // read the blue photoresistor value 
  blueSensorValue = analogRead(blueSensorPin);

  //print out informarion in serial monitor 
  Serial.print("raw sensor Values \t red: ");
  Serial.print(redSensorValue);
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  //divide sensor readings by 4
  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  //print out informarion serial monitor 
  Serial.print("Mapped sensor Values \t red: ");
  Serial.print(redValue);
  Serial.print("\t green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);


  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}

