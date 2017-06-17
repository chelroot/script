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




int bb2 = 0;
int bb3 = 0;
int bb4 = 0;
int bb5 = 0;
int bb6 = 0;
int bb7 = 0;
int bb8 = 0;
int bb9 = 0;
int bb10 = 0;
int bb11 = 0;
int bb12 = 0;
int bb13 = 0;
int bb14 = 0;
int bb15 = 0;
int bb16 = 0;
int bb17 = 0;
int bb18 = 0;
int bb19 = 0;
int bb20 = 0;
int bb21 = 0;

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
  
}  
  
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A1, HIGH); 
  delay(10);
  
      
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
  digitalWrite(A1, LOW); 
  digitalWrite(12, HIGH);
  delay(100);

  
  
  

if (Serial.available() > 0) {
   incomingByte = Serial.read();
      
   if (incomingByte == 'a'){

Serial.print(val2);
Serial.print(val3);
Serial.print(val4);
Serial.print(val5);
Serial.print(val6);
Serial.print(val7);
Serial.print(val8);
Serial.print(val9);
Serial.print(val10);
Serial.print(val11);
Serial.print(val12);
Serial.print(val13);
Serial.print(val14);
Serial.print(val15);
Serial.print(val16);
Serial.print(val17);
Serial.print(val18);
Serial.print(val19);
Serial.print(val20);
Serial.print(val21);

Serial.println();

} 
if (incomingByte == 'q'){

val2 = 0;
val3 = 0; 
val4 = 0;
val5 = 0; 
val6 = 0;
val7 = 0;
val8 = 0; 
val9 = 0;
val10 = 0; 
val11 = 0;
val12 = 0;
val13 = 0; 
val14 = 0;
val15 = 0; 
val16 = 0;
val17 = 0;
val18 = 0; 
val19 = 0;
val20 = 0; 
val21 = 0;

bb2 = 0;
bb3 = 0;
bb4 = 0;
bb5 = 0;
bb6 = 0;
bb7 = 0;
bb8 = 0;
bb9 = 0;
bb10 = 0;
bb11 = 0;
bb12 = 0;
bb13 = 0;
bb14 = 0;
bb15 = 0;
bb16 = 0;
bb17 = 0;
bb18 = 0;
bb19 = 0;
bb20 = 0;
bb21 = 0;
}
  
}
  digitalWrite(12, LOW);
  delay(230);
  

}
