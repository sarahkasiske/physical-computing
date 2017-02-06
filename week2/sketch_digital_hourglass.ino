/*
Arduino Starter Kit example
Project 8 - Digital Hourglass

*/

//name of tilt switch pin
const int switchPin = 8;  

//holds the time an LED was last changed
unsigned long previousTime = 0;

//switch state    
int switchState = 0;   

//holds previous switch state 
int prevSwitchState = 0;          

//counts which led is the next to turn on 
int led = 2;                      

//the interval between each light turning on 
long interval = 1000;            

void setup() {
  // sets the LED pins to be outputs
  for (int x = 2;x<8;x++){
    pinMode(x, OUTPUT); 
  }
  // sets the tilt switch to be an input 
  pinMode(switchPin, INPUT);

}

void loop() {
  // stores how much time has passed since the Arduino started 
  unsigned long currentTime = millis();           

  //if the previousTime = currentTime turn the next LED on
  if (currentTime - previousTime > interval) {
     previousTime = currentTime;
     digitalWrite(led, HIGH);
     led++;

    if (led == 7) {
    }
  }

  switchState = digitalRead(switchPin);

   // if the tilt switch changes turn off all LEDs 
  if(switchState != prevSwitchState){
    for(int x = 2;x<8;x++){    
      digitalWrite(x, LOW);
    }  
    
    led = 2;
    
    previousTime = currentTime;
  }
  
  prevSwitchState = switchState;
}
  
     


