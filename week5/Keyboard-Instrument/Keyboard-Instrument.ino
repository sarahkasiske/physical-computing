//Arduino Starter Kit example
//Project 7  - Keyboard Instrument


//this array holds thefrequencies that will sount as the notes
int notes[] ={262, 294, 400, 500};

void setup() {
  // start serial monitor
 Serial.begin(9600);
}

void loop() {
  //set the A0 Pin 
  int keyVal = analogRead(A0);
  // print the keyVal in the serial monitor
  Serial.println(keyVal);
 
  //if keyVal = 1023 play the first frequency in the frequency array
  //as the number changes play different frequencies
  if (keyVal == 1023) {
    tone(8, notes[0]);
  } else if (keyVal >= 990 && keyVal <= 1010) {
    tone(8, notes[1]);
  } else if (keyVal >= 505 && keyVal <= 515) {
    tone(8, notes[2]);
  } else if (keyVal >= 5 && keyVal <= 10) {
    tone(8, notes[3]);
  } else {
    noTone(8);
  }

}
