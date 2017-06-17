// Подключаем библиотеку
#include <QuadDisplay.h>
int incomingByte;
// Допустим, индикатор подключен к 7-му пину
#define PIN 7


void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  
//  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)//
//  delay(1000);              // wait for a second
//  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);              // wait for a second

  
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
           
    if (incomingByte == 'q') {
      displayInt(PIN, 11);   }
    if (incomingByte == 'w') {
      displayInt(PIN, 12);   }
    if (incomingByte == 'e') {
      displayInt(PIN, 13);   }
    if (incomingByte == 'Q') {
      displayInt(PIN, 14);   }
    if (incomingByte == 'W') {
      displayInt(PIN, 15);   }
    if (incomingByte == 'E') {
      displayInt(PIN, 16);   }
    if (incomingByte == 'r') {
      displayInt(PIN, 21);   }
    if (incomingByte == 't') {
      displayInt(PIN, 22);   }
    if (incomingByte == 'y') {
      displayInt(PIN, 23);   }
    if (incomingByte == 'R') {
      displayInt(PIN, 24);   }
    if (incomingByte == 'T') {
      displayInt(PIN, 25);   }
    if (incomingByte == 'Y') {
      displayInt(PIN, 26);   }
    if (incomingByte == 'u') {
      displayInt(PIN, 31);   }
    if (incomingByte == 'i') {
      displayInt(PIN, 32);   }
    if (incomingByte == 'o') {
      displayInt(PIN, 33);   }
    if (incomingByte == 'U') {
      displayInt(PIN, 34);   }
    if (incomingByte == 'I') {
      displayInt(PIN, 35);   }
    if (incomingByte == 'O') {
      displayInt(PIN, 36);   }
    if (incomingByte == 'a') {
      displayInt(PIN, 41);   }
    if (incomingByte == 's') {
      displayInt(PIN, 42);   }
    if (incomingByte == 'd') {
      displayInt(PIN, 43);   }
    if (incomingByte == 'A') {
      displayInt(PIN, 44);   }
    if (incomingByte == 'S') {
      displayInt(PIN, 45);   }
    if (incomingByte == 'D') {
      displayInt(PIN, 46);   }
    if (incomingByte == 'f') {
      displayInt(PIN, 51);   }
    if (incomingByte == 'g') {
      displayInt(PIN, 52);   }
    if (incomingByte == 'h') {
      displayInt(PIN, 53);   }
    if (incomingByte == 'F') {
      displayInt(PIN, 54);   }
    if (incomingByte == 'G') {
      displayInt(PIN, 55);   }
    if (incomingByte == 'H') {
      displayInt(PIN, 56);   }
    if (incomingByte == 'j') {
      displayInt(PIN, 61);   }
    if (incomingByte == 'k') {
      displayInt(PIN, 62);   }
    if (incomingByte == 'l') {
      displayInt(PIN, 63);   }
    if (incomingByte == 'J') {
      displayInt(PIN, 64);   }
    if (incomingByte == 'K') {
      displayInt(PIN, 65);   }
    if (incomingByte == 'L') {
      displayInt(PIN, 66);   } 
      
      
      
  
          
  
  // можно показывать нехитрый текст (on/off, например) или
  // произвольную графику
//  displayDigits(PIN, QD_O, QD_f, QD_f, QD_NONE); // off
//  delay(1000);
//  displayDigits(PIN, QD_O, QD_n, QD_NONE, QD_NONE); // on
//  delay(1000);
//  // и, конечно, всё очищать
//  displayClear(PIN);
//  delay(1000);

    }
    if (incomingByte == 'q') {
      displayInt(PIN, 11);   }
    if (incomingByte == 'w') {
      displayInt(PIN, 12);   }
    if (incomingByte == 'e') {
      displayInt(PIN, 13);   }
    if (incomingByte == 'Q') {
      displayInt(PIN, 14);   }
    if (incomingByte == 'W') {
      displayInt(PIN, 15);   }
    if (incomingByte == 'E') {
      displayInt(PIN, 16);   }
    if (incomingByte == 'r') {
      displayInt(PIN, 21);   }
    if (incomingByte == 't') {
      displayInt(PIN, 22);   }
    if (incomingByte == 'y') {
      displayInt(PIN, 23);   }
    if (incomingByte == 'R') {
      displayInt(PIN, 24);   }
    if (incomingByte == 'T') {
      displayInt(PIN, 25);   }
    if (incomingByte == 'Y') {
      displayInt(PIN, 26);   }
    if (incomingByte == 'u') {
      displayInt(PIN, 31);   }
    if (incomingByte == 'i') {
      displayInt(PIN, 32);   }
    if (incomingByte == 'o') {
      displayInt(PIN, 33);   }
    if (incomingByte == 'U') {
      displayInt(PIN, 34);   }
    if (incomingByte == 'I') {
      displayInt(PIN, 35);   }
    if (incomingByte == 'O') {
      displayInt(PIN, 36);   }
    if (incomingByte == 'a') {
      displayInt(PIN, 41);   }
    if (incomingByte == 's') {
      displayInt(PIN, 42);   }
    if (incomingByte == 'd') {
      displayInt(PIN, 43);   }
    if (incomingByte == 'A') {
      displayInt(PIN, 44);   }
    if (incomingByte == 'S') {
      displayInt(PIN, 45);   }
    if (incomingByte == 'D') {
      displayInt(PIN, 46);   }
    if (incomingByte == 'f') {
      displayInt(PIN, 51);   }
    if (incomingByte == 'g') {
      displayInt(PIN, 52);   }
    if (incomingByte == 'h') {
      displayInt(PIN, 53);   }
    if (incomingByte == 'F') {
      displayInt(PIN, 54);   }
    if (incomingByte == 'G') {
      displayInt(PIN, 55);   }
    if (incomingByte == 'H') {
      displayInt(PIN, 56);   }
    if (incomingByte == 'j') {
      displayInt(PIN, 61);   }
    if (incomingByte == 'k') {
      displayInt(PIN, 62);   }
    if (incomingByte == 'l') {
      displayInt(PIN, 63);   }
    if (incomingByte == 'J') {
      displayInt(PIN, 64);   }
    if (incomingByte == 'K') {
      displayInt(PIN, 65);   }
    if (incomingByte == 'L') {
      displayInt(PIN, 66);   } 
    delay (2000);
    
    displayClear(PIN);
    delay (500);
    displayDigits(PIN, QD_O, QD_n, QD_NONE, QD_NONE);
    delay (1000);
   }

