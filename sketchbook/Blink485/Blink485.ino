
//int EN = 2;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
//  pinMode(EN, OUTPUT );
  Serial.begin (4800);
}

// the loop function runs over and over again forever
void loop() {
//  digitalWrite(EN, HIGH ); // enable send
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print('a');
  delay(2000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  Serial.print('b');
  delay(1000);              // wait for a second
}
