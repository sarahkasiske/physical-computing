/*
  Arduino Starter Kit example
 Project 3  - Love-O-Meter
 */

//constants can not change
const int sensorPin = A0;
//temperture is being stored as a floating-point number
const float baselineTemp = 20.0;

void setup() {
  // put your setup code here, to run once:
  //starts the serial port
  Serial.begin(9600);
  
  // Declaring pins for LEDs
  //loop runs through pins 2-4
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {
    // set LED pins to be outputs
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  //pulls information from the sensor
  int sensorVal = analogRead(sensorPin);
  
  //pulls information from the Arduino
  // then prints it in the serial monitor
  //sends the sensor value
  Serial.print("sensor Value: ");
  Serial.print(sensorVal);

  //does math to figure out the voltage
  float voltage = (sensorVal / 1024.0) * 5.0;
    
  //sends the vlotage level
  Serial.print(", Volts: ");
  Serial.print(voltage);

   
  // Print the C degrees
  Serial.print(", degrees C: ");
  // convert the voltage to temperature in degrees C
  float temperature = (voltage - .5) * 100;
  //print the Temperture
  Serial.println(temperature);

  //uses the baseline temperture as a starting point
  //urns on an led everytime the temperture increases by 2 degrees 
  if (temperature < baselineTemp + 2) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    } // if the temperature rises to 2-4 degrees, turn an LED on
    else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    } // if the temperature rises 2 more degrees, turn a second LED on
    else if (temperature >= baselineTemp + 4 && temperature < baselineTemp + 6) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
    } // if the temperature rises 2 more degrees, turn a second LED on
    else if (temperature >= baselineTemp + 6) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    delay(1);
  

}
