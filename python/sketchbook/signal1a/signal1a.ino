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
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  
      int val;
      
val = digitalRead(0);  
 Serial.print(val);
Serial.print("q");
Serial.println();

  val = digitalRead(1);  
 Serial.print(val);
Serial.print("w");
Serial.println();      

  val = digitalRead(2);  
 Serial.print(val);
Serial.print("e");
Serial.println();

  val = digitalRead(3);  
 Serial.print(val);
Serial.print("r");
Serial.println();

 val = digitalRead(4);  
 Serial.print(val);
Serial.print("t");
Serial.println();

  val = digitalRead(5);  
 Serial.print(val);
Serial.print("y");
Serial.println();

 val = digitalRead(6);  
 Serial.print(val);
Serial.print("u");
Serial.println();

  val = digitalRead(7);  
 Serial.print(val);
Serial.print("i");
Serial.println();

 val = digitalRead(8);  
 Serial.print(val);
Serial.print("o");
Serial.println();

  val = digitalRead(9);  
 Serial.print(val);
Serial.print("p");
Serial.println();

 val = digitalRead(11);  
 Serial.print(val);
Serial.print("a");
Serial.println();

 val = digitalRead(12);  
 Serial.print(val);
Serial.print("s");
Serial.println();

  val = digitalRead(13);  
 Serial.print(val);
Serial.print("d");
Serial.println();




Serial.print("sss");
Serial.println();



  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);

}
