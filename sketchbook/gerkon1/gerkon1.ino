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


Проверка
// Подключаем библиотеку
#include <QuadDisplay.h>

// номер цифрового пина дисплея
#define DISPLAY_PIN A0
int val = 88;

void setup()
{
}

void loop()
{
  // можно показывать ведущие нули (0012)
   if (val == 0)  {
     displayInt(DISPLAY_PIN, val, true); 
     delay(1000);
 //    displayInt(DISPLAY_PIN,  true); 
     displayClear(DISPLAY_PIN);
 //    displayClear(); 
 //    displayDigits(QD_O, QD_f, QD_f, QD_NONE); // off
     delay(1000);}
   else {
       displayInt(DISPLAY_PIN, val, true);
       delay(1000);
       val = val -1; 
      }
   
  
//  displayInt(DISPLAY_PIN, val, true);
//  delay(10);
//  val = val -1;

  
}


########################################

#include <QuadDisplay.h>

#define DISPLAY_PIN A0
int val = 8888;
int tt = 1000;
int ledPin0 = 0;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;
int ledPin10 = 10;
int ledPin11 = 11;
int ledPin12 = 12;
int ledPin13 = 13;
int ledPinA1 = A1;
int ledPinA2 = A2;
int ledPinA3 = A3;
int ledPinA4 = A4;
int ledPinA5 = A5;

int incomingByte;
int ii;
int zz;
void setup() {
    Serial.begin(9600);
    pinMode(ledPin0, OUTPUT);
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin8, OUTPUT);
    pinMode(ledPin9, OUTPUT);
    pinMode(ledPin10, OUTPUT);
    pinMode(ledPin11, OUTPUT);
    pinMode(ledPin12, OUTPUT);
    pinMode(ledPin13, OUTPUT);
    pinMode(ledPinA1, OUTPUT);
    pinMode(ledPinA2, OUTPUT);
    pinMode(ledPinA3, OUTPUT);
    pinMode(ledPinA4, OUTPUT);
    pinMode(ledPinA5, OUTPUT);
  
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(A5, HIGH);
    }  
    
void loop() {
  if (val == 8888)  
     {displayInt(DISPLAY_PIN, val); val = val + 1; }
   
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    ii = incomingByte;
    if (ii == 'q') {digitalWrite(0, HIGH);displayInt(DISPLAY_PIN, 100);} 
    if (ii == 'Q') {digitalWrite(0, LOW); displayInt(DISPLAY_PIN, 200);}
    if (ii == 'w') {digitalWrite(1, HIGH);displayInt(DISPLAY_PIN, 101);} 
    if (ii == 'W') {digitalWrite(1, LOW); displayInt(DISPLAY_PIN, 201);}
    if (ii == 'e') {digitalWrite(2, HIGH);displayInt(DISPLAY_PIN, 102);} 
    if (ii == 'E') {digitalWrite(2, LOW); displayInt(DISPLAY_PIN, 202);}
    if (ii == 'r') {digitalWrite(3, HIGH);displayInt(DISPLAY_PIN, 103);} 
    if (ii == 'R') {digitalWrite(3, LOW); displayInt(DISPLAY_PIN, 203);}
    if (ii == 't') {digitalWrite(4, HIGH);displayInt(DISPLAY_PIN, 104);} 
    if (ii == 'T') {digitalWrite(4, LOW); displayInt(DISPLAY_PIN, 204);}
    if (ii == 'y') {digitalWrite(5, HIGH);displayInt(DISPLAY_PIN, 105);} 
    if (ii == 'Y') {digitalWrite(5, LOW); displayInt(DISPLAY_PIN, 205);}
    if (ii == 'u') {digitalWrite(6, HIGH);displayInt(DISPLAY_PIN, 106);} 
    if (ii == 'U') {digitalWrite(6, LOW);displayInt(DISPLAY_PIN, 206);}
    if (ii == 'i') {digitalWrite(7, HIGH);displayInt(DISPLAY_PIN, 107);} 
    if (ii == 'I') {digitalWrite(7, LOW);displayInt(DISPLAY_PIN, 207);}
    if (ii == 'o') {digitalWrite(8, HIGH);displayInt(DISPLAY_PIN, 108);} 
    if (ii == 'O') {digitalWrite(8, LOW);displayInt(DISPLAY_PIN, 208);}
    if (ii == 'p') {digitalWrite(9, HIGH);displayInt(DISPLAY_PIN, 109);} 
    if (ii == 'P') {digitalWrite(9, LOW);displayInt(DISPLAY_PIN, 209);}
    if (ii == 'a') {digitalWrite(10, HIGH);displayInt(DISPLAY_PIN, 110);} 
    if (ii == 'A') {digitalWrite(10, LOW);displayInt(DISPLAY_PIN, 210);}
    if (ii == 's') {digitalWrite(11, HIGH);displayInt(DISPLAY_PIN, 111);} 
    if (ii == 'S') {digitalWrite(11, LOW);displayInt(DISPLAY_PIN, 211);}
    if (ii == 'd') {digitalWrite(12, HIGH);displayInt(DISPLAY_PIN, 112);} 
    if (ii == 'D') {digitalWrite(12, LOW);displayInt(DISPLAY_PIN, 212);}
    if (ii == 'f') {digitalWrite(13, HIGH);displayInt(DISPLAY_PIN, 113);} 
    if (ii == 'F') {digitalWrite(13, LOW);displayInt(DISPLAY_PIN, 213);}
    if (ii == 'g') {digitalWrite(A1, HIGH);displayInt(DISPLAY_PIN, 114);} 
    if (ii == 'G') {digitalWrite(A1, LOW);displayInt(DISPLAY_PIN, 214);}
    if (ii == 'h') {digitalWrite(A2, HIGH);displayInt(DISPLAY_PIN, 115);} 
    if (ii == 'H') {digitalWrite(A2, LOW);displayInt(DISPLAY_PIN, 215);}
    if (ii == 'j') {digitalWrite(A3, HIGH);displayInt(DISPLAY_PIN, 116);} 
    if (ii == 'J') {digitalWrite(A3, LOW);displayInt(DISPLAY_PIN, 216);}
    if (ii == 'k') {digitalWrite(A4, HIGH);displayInt(DISPLAY_PIN, 117);} 
    if (ii == 'K') {digitalWrite(A4, LOW);displayInt(DISPLAY_PIN, 217);}
    if (ii == 'l') {digitalWrite(A5, HIGH);displayInt(DISPLAY_PIN, 118);} 
    if (ii == 'L') {digitalWrite(A5, LOW);displayInt(DISPLAY_PIN, 218);}
    
    if (ii == 'z') {zz =1;}
       
    if (ii == 'Z') {zz =0;}   
    
    
    
   }
   if (zz == 1)  
      {displayInt(DISPLAY_PIN, 1);
       digitalWrite(0, LOW);
       digitalWrite(1, LOW);
       digitalWrite(2, LOW);
       digitalWrite(3, LOW);
       digitalWrite(4, LOW);
       digitalWrite(5, LOW);
       digitalWrite(6, LOW);
       digitalWrite(7, LOW);
       digitalWrite(8, LOW);
       digitalWrite(9, LOW);
       digitalWrite(10, LOW);
       digitalWrite(11, LOW);
       digitalWrite(12, LOW);
       digitalWrite(13, LOW);
         
       delay(tt); 
       digitalWrite(0, HIGH);
       digitalWrite(1, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       digitalWrite(7, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(9, HIGH);
       digitalWrite(10, HIGH);
       digitalWrite(11, HIGH);
       digitalWrite(12, HIGH);
       digitalWrite(13, HIGH);
       delay(tt); } 
   } 
