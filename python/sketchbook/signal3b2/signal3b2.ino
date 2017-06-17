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
if (val == 0)
Serial.print("10");
Serial.print(val);
Serial.println();     

  val = digitalRead(1);  
if (val == 0)
Serial.print("11");
Serial.print(val);
Serial.println();      

  val = digitalRead(2);  
if (val == 0)
Serial.print("12");
Serial.print(val);
Serial.println();

  val = digitalRead(3);  
if (val == 0)
Serial.print("13");
Serial.print(val);
Serial.println();

 val = digitalRead(4);  
if (val == 0)
Serial.print("14");
Serial.print(val);
Serial.println();

  val = digitalRead(5);  
if (val == 0)
Serial.print("15");
Serial.print(val);
Serial.println();

 val = digitalRead(6);  
if (val == 0)
Serial.print("16");
Serial.print(val);
Serial.println();

  val = digitalRead(7);  
if (val == 0)
Serial.print("17");
Serial.print(val);
Serial.println();

 val = digitalRead(8);  
if (val == 0)
Serial.print("18");
Serial.print(val);
Serial.println();

  val = digitalRead(9);  
if (val == 0)
Serial.print("19");
Serial.print(val);
Serial.println();

 val = digitalRead(10);  
if (val == 0)
Serial.print("20");
Serial.print(val);
Serial.println();

 val = digitalRead(11);  
if (val == 0)
Serial.print("21");
Serial.print(val);
Serial.println();

  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);
 
  
   val = digitalRead(0);  
if (val == 0)
Serial.print("22");
Serial.print(val);
Serial.println();     
      
  val = digitalRead(1);  
if (val == 0)
Serial.print("23");
Serial.print(val);
Serial.println();      

  val = digitalRead(2);  
if (val == 0)
Serial.print("24");
Serial.print(val);
Serial.println();

  val = digitalRead(3);  
if (val == 0)
Serial.print("25");
Serial.print(val);
Serial.println();

 val = digitalRead(4);  
if (val == 0)
Serial.print("26");
Serial.print(val);
Serial.println();

  val = digitalRead(5);  
if (val == 0)
Serial.print("27");
Serial.print(val);
Serial.println();

 val = digitalRead(6);  
if (val == 0)
Serial.print("28");
Serial.print(val);
Serial.println();

  val = digitalRead(7);  
if (val == 0)
Serial.print("29");
Serial.print(val);
Serial.println();

 val = digitalRead(8);  
if (val == 0)
Serial.print("30");
Serial.print(val);
Serial.println();

  val = digitalRead(9);  
if (val == 0)
Serial.print("31");
Serial.print(val);
Serial.println();

 val = digitalRead(10);  
if (val == 0)
Serial.print("32");
Serial.print(val);
Serial.println();

 val = digitalRead(11);  
if (val == 0)
Serial.print("33");
Serial.print(val);
Serial.println();
  
Serial.print("111111");
Serial.println();
 
 
 
  digitalWrite(12, LOW);
  delay(550);
  

}
