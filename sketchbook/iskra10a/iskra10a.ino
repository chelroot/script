int ledPin13 = 13;
int ledPin7 = 7;
int ledPin6 = 6;
int ledPin5 = 5;
int ledPin4 = 4;
int ledPin3 = 3;
int ledPin2 = 2;


int val2;
int val3;
int val4;
int val5;
int val6;
int val7;



int bb2 = 0;
int bb3 = 0;
int bb4 = 0;
int bb5 = 0;
int bb6 = 0;
int bb7 = 0;


int b2b2 = 0;
int b2b3 = 0;
int b2b4 = 0;
int b2b5 = 0;
int b2b6 = 0;
int b2b7 = 0;

int tt=500;

int incomingByte;      // a variable to read incoming serial data into


void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  
  
  pinMode(ledPin13, OUTPUT);
  
  pinMode(ledPin7, INPUT);
  pinMode(ledPin6, INPUT);
  pinMode(ledPin5, INPUT);
  pinMode(ledPin4, INPUT);
  pinMode(ledPin3, INPUT);
  pinMode(ledPin2, INPUT);
  
}  
  
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  
  
  digitalWrite(A0, HIGH); 
  delay(tt);
  
      
  val2 = digitalRead(2);
  if (val2 == 0)  {
   if (bb2 == 1)  { 
    Serial.print("11");
    Serial.print(val2);
    Serial.println(); 
    bb2 = 0;
    }  }
   else if (bb2 == 0)  {
    Serial.print("11");
    Serial.print(val2);
    Serial.println(); 
    bb2 = 1;
    }
    
  val3 = digitalRead(3);
  if (val3 == 0)  {
   if (bb3 == 1)  { 
    Serial.print("12");
    Serial.print(val3);
    Serial.println(); 
    bb3 = 0;
    }  }
   else if (bb3 == 0)  {
    Serial.print("12");
    Serial.print(val3);
    Serial.println(); 
    bb3 = 1;
    }
  
  val4 = digitalRead(4);
  if (val4 == 0)  {
   if (bb4 == 1)  { 
    Serial.print("13");
    Serial.print(val4);
    Serial.println(); 
    bb4 = 0;
    }  }
   else if (bb4 == 0)  {
    Serial.print("13");
    Serial.print(val4);
    Serial.println(); 
    bb4 = 1;
    }  
  
  val5 = digitalRead(5);  
  if (val5 == 0)  {
   if (bb5 == 1)  { 
    Serial.print("14");
    Serial.print(val5);
    Serial.println(); 
    bb5 = 0;
    }  }
   else if (bb5 == 0)  {
    Serial.print("14");
    Serial.print(val5);
    Serial.println(); 
    bb5 = 1;
    }
  
  val6 = digitalRead(6);
  if (val6 == 0)  {
   if (bb6 == 1)  { 
    Serial.print("15");
    Serial.print(val6);
    Serial.println(); 
    bb6 = 0;
    }  }
   else if (bb6 == 0)  {
    Serial.print("15");
    Serial.print(val6);
    Serial.println(); 
    bb6 = 1;
    }  
    
  val7 = digitalRead(7); 
  if (val7 == 0)  {
   if (bb7 == 1)  { 
    Serial.print("16");
    Serial.print(val7);
    Serial.println(); 
    bb7 = 0;
    }  }
   else if (bb7 == 0)  {
    Serial.print("16");
    Serial.print(val7);
    Serial.println(); 
    bb7 = 1;
    } 
 
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW); 
///////////////////////////////////////////////////////////////////////
  digitalWrite(A1, HIGH);
  delay(tt);

val2 = digitalRead(2);
  if (val2 == 0)  {
   if (b2b2 == 1)  { 
    Serial.print("21");
    Serial.print(val2);
    Serial.println(); 
    b2b2 = 0;
    }  }
   else if (b2b2 == 0)  {
    Serial.print("21");
    Serial.print(val2);
    Serial.println(); 
    b2b2 = 1;
    }
    
  val3 = digitalRead(3);
  if (val3 == 0)  {
   if (b2b3 == 1)  { 
    Serial.print("22");
    Serial.print(val3);
    Serial.println(); 
    b2b3 = 0;
    }  }
   else if (b2b3 == 0)  {
    Serial.print("22");
    Serial.print(val3);
    Serial.println(); 
    b2b3 = 1;
    }
  
  val4 = digitalRead(4);
  if (val4 == 0)  {
   if (b2b4 == 1)  { 
    Serial.print("23");
    Serial.print(val4);
    Serial.println(); 
    b2b4 = 0;
    }  }
   else if (b2b4 == 0)  {
    Serial.print("23");
    Serial.print(val4);
    Serial.println(); 
    b2b4 = 1;
    }  
  
  val5 = digitalRead(5);  
  if (val5 == 0)  {
   if (b2b5 == 1)  { 
    Serial.print("24");
    Serial.print(val5);
    Serial.println(); 
    b2b5 = 0;
    }  }
   else if (b2b5 == 0)  {
    Serial.print("24");
    Serial.print(val5);
    Serial.println(); 
    b2b5 = 1;
    }
  
  val6 = digitalRead(6);
  if (val6 == 0)  {
   if (b2b6 == 1)  { 
    Serial.print("25");
    Serial.print(val6);
    Serial.println(); 
    b2b6 = 0;
    }  }
   else if (b2b6 == 0)  {
    Serial.print("25");
    Serial.print(val6);
    Serial.println(); 
    b2b6 = 1;
    }  
    
  val7 = digitalRead(7); 
  if (val7 == 0)  {
   if (b2b7 == 1)  { 
    Serial.print("26");
    Serial.print(val7);
    Serial.println(); 
    b2b7 = 0;
    }  }
   else if (b2b7 == 0)  {
    Serial.print("26");
    Serial.print(val7);
    Serial.println(); 
    b2b7 = 1;
    } 
  
  
  digitalWrite(A1, LOW);
  //////////////////////////////////
  digitalWrite(A2, HIGH);
  delay(tt);
  
  
  digitalWrite(A2, LOW);
  //////////////////////////////////
  digitalWrite(A3, HIGH);
  delay(tt);
  
  
  digitalWrite(A3, LOW);
  //////////////////////////////////
  digitalWrite(A4, HIGH);
  delay(tt);
  
  
  digitalWrite(A4, LOW);
  //////////////////////////////////
  digitalWrite(A5, HIGH);
  delay(tt);
  
  
  digitalWrite(A5, LOW);
    
  
  

if (Serial.available() > 0) {
   incomingByte = Serial.read();
      
   if (incomingByte == 'a'){

Serial.print(val2);
Serial.print(val3);
Serial.print(val4);
Serial.print(val5);
Serial.print(val6);
Serial.print(val7);


Serial.println();

} 
if (incomingByte == 'q'){

val2 = 0;
val3 = 0; 
val4 = 0;
val5 = 0; 
val6 = 0;
val7 = 0;

bb2 = 0;
bb3 = 0;
bb4 = 0;
bb5 = 0;
bb6 = 0;
bb7 = 0;

}
  
}
  
  

}
