int ledPin13 = 13;
int ledPin12 = 12;
int ledPin11 = 11;
int ledPin10 = 10;
int ledPin9 = 9;
int ledPin8 = 8;
int ledPin7 = 7;
int ledPin6 = 6;
int ledPin5 = 5;
int ledPin4 = 4;
int ledPin3 = 3;
int ledPin2 = 2;
int ledPin1 = 1;
int ledPin0 = 0;

// the setup function runs once when you press reset or power the board
//void setup() {
  // initialize digital pin 13 as an output.
//  pinMode(13, OUTPUT);
//}


int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin0, OUTPUT);
  
}  
  

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  
      int val;
      
  val = digitalRead(1);  
Serial.print("11");
Serial.print(val);
Serial.println();      

  val = digitalRead(2);  
Serial.print("12");
Serial.print(val);
Serial.println();

  val = digitalRead(3);  
Serial.print("13");
Serial.print(val);
Serial.println();

 val = digitalRead(4);  
Serial.print("14");
Serial.print(val);
Serial.println();

  val = digitalRead(5);  
Serial.print("15");
Serial.print(val);
Serial.println();

 val = digitalRead(6);  
Serial.print("16");
Serial.print(val);
Serial.println();

  val = digitalRead(7);  
Serial.print("17");
Serial.print(val);
Serial.println();

 val = digitalRead(8);  
Serial.print("18");
Serial.print(val);
Serial.println();

  val = digitalRead(9);  
Serial.print("19");
Serial.print(val);
Serial.println();

 val = digitalRead(10);  
Serial.print("20");
Serial.print(val);
Serial.println();

 val = digitalRead(11);  
Serial.print("21");
Serial.print(val);
Serial.println();

 val = digitalRead(12);  
Serial.print("22");
Serial.print(val);
Serial.println();

  val = digitalRead(13);  
Serial.print("23");
Serial.print(val);
Serial.println();




Serial.print("111111");
Serial.println();

delay(5);
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  delay(195);

}
