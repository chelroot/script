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

int val0; 
int val1;
int val2;
int val3;
int val4;
int val5;
int val6;
int val7;
int val8;
int val9;
int val10;
int val11; 
int val12;
int val13;
int val14;
int val15;
int val16;
int val17;
int val18;
int val19;
int val20;
int val21;
int val22;
int val23;


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
  pinMode(ledPin11, INPUT);
  pinMode(ledPin10, INPUT);
  pinMode(ledPin9, INPUT);
  pinMode(ledPin8, INPUT);
  pinMode(ledPin7, INPUT);
  pinMode(ledPin6, INPUT);
  pinMode(ledPin5, INPUT);
  pinMode(ledPin4, INPUT);
  pinMode(ledPin3, INPUT);
  pinMode(ledPin2, INPUT);
  pinMode(ledPin1, INPUT);
  pinMode(ledPin0, INPUT);
  
}  
  

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  
      int val;
      
  val = digitalRead(0);  
Serial.print(val);
  val = digitalRead(1);  
Serial.print(val);
  val = digitalRead(2);  
Serial.print(val);
  val = digitalRead(3);  
Serial.print(val);
  val = digitalRead(4);  
Serial.print(val);
  val = digitalRead(5);  
Serial.print(val);
  val = digitalRead(6);  
Serial.print(val);
  val = digitalRead(7);  
Serial.print(val);
  val = digitalRead(8);  
Serial.print(val);
  val = digitalRead(9);  
Serial.print(val);
  val = digitalRead(10);  
Serial.print(val);
  val = digitalRead(11);  
Serial.print(val);

  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);

  val = digitalRead(0);  
Serial.print(val);
  val = digitalRead(1);  
Serial.print(val);
  val = digitalRead(2);  
Serial.print(val);
  val = digitalRead(3);  
Serial.print(val);
  val = digitalRead(4);  
Serial.print(val);
  val = digitalRead(5);  
Serial.print(val);
  val = digitalRead(6);  
Serial.print(val);
  val = digitalRead(7);  
Serial.print(val);
  val = digitalRead(8);  
Serial.print(val);
  val = digitalRead(9);  
Serial.print(val);
  val = digitalRead(10);  
Serial.print(val);
  val = digitalRead(11);  
Serial.print(val);
  
//Serial.print("111111");
Serial.println();
 
 
 
  digitalWrite(12, LOW);
  delay(550);
  

}
