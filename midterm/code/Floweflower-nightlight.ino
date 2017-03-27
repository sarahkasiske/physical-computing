int sensorPin = A0;            
unsigned int sensorValue = 0;  

int val;

//#include <Servo.h>
//Servo myServo;

void setup(){
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  // myServo.attach(9);
  
  Serial.begin(9600);  // Start Serial port
}

void loop() {
  //Serial.println(analogRead(sensorPin));
  sensorValue = analogRead(sensorPin);

 Serial.println(analogRead(2));
  val = analogRead(2);

  // set server motor
  //if(sensorValue<6) myServo.write(90);  // set the servo motor to 90 degrees
  //else myServo.write(180);   // set the servo motor to 180 degrees
  
  if((sensorValue<3) && (val > 200)) {
    digitalWrite(13, HIGH);  
  }else if( (sensorValue<3) && (val < 200)){
    digitalWrite(13, LOW);   
  } else{
    digitalWrite(13, LOW);
  }
   
  if((sensorValue<3) && (val > 300)) {
    digitalWrite(12, HIGH);  
  }else if( (sensorValue<3) && (val < 300)){
    digitalWrite(12, LOW);   
  } else{
    digitalWrite(12, LOW);
  }
 
  if((sensorValue<3) && (val > 400)) {
    digitalWrite(11, HIGH);  
  }else if((sensorValue<3) && (val < 400)){
    digitalWrite(11, LOW);   
  } else{
    digitalWrite(11, LOW);
  }

  if((sensorValue<3) && (val > 500)) {
    digitalWrite(10, HIGH);  
  }else if((sensorValue<3) && (val < 500)){
    digitalWrite(10, LOW);   
  } else{
    digitalWrite(10, LOW);
  }

}

