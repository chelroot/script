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


int bb0 = 0;
int bb1 = 0;
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
int bb22 = 0;
int bb23 = 0;



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
  delay(2);
  
      //int val;
      
  val0 = digitalRead(0);
  if (val0 == 0)  {
   if (bb0 == 1)  { 
    Serial.print("20");
    Serial.print(val0);
    Serial.println(); 
    bb0 = 0;
    }  }
   else if (bb0 == 0)  {
    Serial.print("20");
    Serial.print(val0);
    Serial.println(); 
    bb0 = 1;
    }
    
    
  val1 = digitalRead(1);
  if (val1 == 0)  {
   if (bb1 == 1)  { 
    Serial.print("21");
    Serial.print(val1);
    Serial.println(); 
    bb1 = 0;
    }  }
   else if (bb1 == 0)  {
    Serial.print("21");
    Serial.print(val1);
    Serial.println(); 
    bb1 = 1;
    }
    
  val2 = digitalRead(2);
  if (val2 == 0)  {
   if (bb2 == 1)  { 
    Serial.print("22");
    Serial.print(val2);
    Serial.println(); 
    bb2 = 0;
    }  }
   else if (bb2 == 0)  {
    Serial.print("22");
    Serial.print(val2);
    Serial.println(); 
    bb2 = 1;
    }
    
  val3 = digitalRead(3);
  if (val3 == 0)  {
   if (bb3 == 1)  { 
    Serial.print("23");
    Serial.print(val3);
    Serial.println(); 
    bb3 = 0;
    }  }
   else if (bb3 == 0)  {
    Serial.print("23");
    Serial.print(val3);
    Serial.println(); 
    bb3 = 1;
    }
  
  val4 = digitalRead(4);
  if (val4 == 0)  {
   if (bb4 == 1)  { 
    Serial.print("24");
    Serial.print(val4);
    Serial.println(); 
    bb4 = 0;
    }  }
   else if (bb4 == 0)  {
    Serial.print("24");
    Serial.print(val4);
    Serial.println(); 
    bb4 = 1;
    }  
  
  val5 = digitalRead(5);  
  if (val5 == 0)  {
   if (bb5 == 1)  { 
    Serial.print("25");
    Serial.print(val5);
    Serial.println(); 
    bb5 = 0;
    }  }
   else if (bb5 == 0)  {
    Serial.print("25");
    Serial.print(val5);
    Serial.println(); 
    bb5 = 1;
    }
  
  val6 = digitalRead(6);
  if (val6 == 0)  {
   if (bb6 == 1)  { 
    Serial.print("26");
    Serial.print(val6);
    Serial.println(); 
    bb6 = 0;
    }  }
   else if (bb6 == 0)  {
    Serial.print("26");
    Serial.print(val6);
    Serial.println(); 
    bb6 = 1;
    }  
    
  val7 = digitalRead(7); 
  if (val7 == 0)  {
   if (bb7 == 1)  { 
    Serial.print("27");
    Serial.print(val7);
    Serial.println(); 
    bb7 = 0;
    }  }
   else if (bb7 == 0)  {
    Serial.print("27");
    Serial.print(val7);
    Serial.println(); 
    bb7 = 1;
    } 
    
  val8 = digitalRead(8);
  if (val8 == 0)  {
   if (bb8 == 1)  { 
    Serial.print("28");
    Serial.print(val8);
    Serial.println(); 
    bb8 = 0;
    }  }
   else if (bb8 == 0)  {
    Serial.print("28");
    Serial.print(val8);
    Serial.println(); 
    bb8 = 1;
    }   
    
  val9 = digitalRead(9);  
  if (val9 == 0)  {
   if (bb9 == 1)  { 
    Serial.print("29");
    Serial.print(val9);
    Serial.println(); 
    bb9 = 0;
    }  }
   else if (bb9 == 0)  {
    Serial.print("29");
    Serial.print(val9);
    Serial.println(); 
    bb9 = 1;
    } 
  
  val10 = digitalRead(10);
  if (val10 == 0)  {
   if (bb10 == 1)  { 
    Serial.print("30");
    Serial.print(val10);
    Serial.println(); 
    bb10 = 0;
    }  }
   else if (bb10 == 0)  {
    Serial.print("30");
    Serial.print(val10);
    Serial.println(); 
    bb10 = 1;
    }  
  
  val11 = digitalRead(11);
  if (val11 == 0)  {
   if (bb11 == 1)  { 
    Serial.print("31");
    Serial.print(val11);
    Serial.println(); 
    bb11 = 0;
    }  }
   else if (bb11 == 0)  {
    Serial.print("31");
    Serial.print(val11);
    Serial.println(); 
    bb11 = 1;
    }     

  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);
  delay(2);

  val12 = digitalRead(0);
  if (val12 == 0)  {
   if (bb12 == 1)  { 
    Serial.print("32");
    Serial.print(val12);
    Serial.println(); 
    bb12 = 0;
    }  }
   else if (bb12 == 0)  {
    Serial.print("32");
    Serial.print(val12);
    Serial.println(); 
    bb12 = 1;
    } 
    
  val13 = digitalRead(1);
  if (val13 == 0)  {
   if (bb13 == 1)  { 
    Serial.print("33");
    Serial.print(val13);
    Serial.println(); 
    bb13 = 0;
    }  }
   else if (bb13 == 0)  {
    Serial.print("33");
    Serial.print(val13);
    Serial.println(); 
    bb13 = 1;
    }   
    
  val14 = digitalRead(2);
  if (val14 == 0)  {
   if (bb14 == 1)  { 
    Serial.print("34");
    Serial.print(val14);
    Serial.println(); 
    bb14 = 0;
    }  }
   else if (bb14 == 0)  {
    Serial.print("34");
    Serial.print(val14);
    Serial.println(); 
    bb14 = 1;
    }   
  
  val15 = digitalRead(3);
  if (val15 == 0)  {
   if (bb15 == 1)  { 
    Serial.print("35");
    Serial.print(val15);
    Serial.println(); 
    bb15 = 0;
    }  }
   else if (bb15 == 0)  {
    Serial.print("35");
    Serial.print(val15);
    Serial.println(); 
    bb15 = 1;
    }   
  
  val16 = digitalRead(4);
  if (val16 == 0)  {
   if (bb16 == 1)  { 
    Serial.print("36");
    Serial.print(val16);
    Serial.println(); 
    bb16 = 0;
    }  }
   else if (bb16 == 0)  {
    Serial.print("36");
    Serial.print(val16);
    Serial.println(); 
    bb16 = 1;
    }   
    
  val17 = digitalRead(5); 
  if (val17 == 0)  {
   if (bb17 == 1)  { 
    Serial.print("37");
    Serial.print(val17);
    Serial.println(); 
    bb17 = 0;
    }  }
   else if (bb17 == 0)  {
    Serial.print("37");
    Serial.print(val17);
    Serial.println(); 
    bb17 = 1;
    }  
  
  val18 = digitalRead(6);
  if (val18 == 0)  {
   if (bb18 == 1)  { 
    Serial.print("38");
    Serial.print(val18);
    Serial.println(); 
    bb18 = 0;
    }  }
   else if (bb18 == 0)  {
    Serial.print("38");
    Serial.print(val18);
    Serial.println(); 
    bb18 = 1;
    }   
    
  val19 = digitalRead(7);
  if (val19== 0)  {
   if (bb19 == 1)  { 
    Serial.print("39");
    Serial.print(val19);
    Serial.println(); 
    bb19 = 0;
    }  }
   else if (bb19 == 0)  {
    Serial.print("39");
    Serial.print(val19);
    Serial.println(); 
    bb19 = 1;
    }   
  
  val20 = digitalRead(8);
  if (val20 == 0)  {
   if (bb20 == 1)  { 
    Serial.print("40");
    Serial.print(val20);
    Serial.println(); 
    bb20 = 0;
    }  }
   else if (bb20 == 0)  {
    Serial.print("40");
    Serial.print(val20);
    Serial.println(); 
    bb20 = 1;
    }   
   
  val21 = digitalRead(9);
  if (val21 == 0)  {
   if (bb21 == 1)  { 
    Serial.print("41");
    Serial.print(val21);
    Serial.println(); 
    bb21 = 0;
    }  }
   else if (bb21 == 0)  {
    Serial.print("41");
    Serial.print(val21);
    Serial.println(); 
    bb21 = 1;
    }   
    
  val22 = digitalRead(10);
  if (val22 == 0)  {
   if (bb22 == 1)  { 
    Serial.print("42");
    Serial.print(val21);
    Serial.println(); 
    bb21 = 0;
    }  }
   else if (bb21 == 0)  {
    Serial.print("42");
    Serial.print(val21);
    Serial.println(); 
    bb21 = 1;
    }   
    
  val23 = digitalRead(11);
  if (val23 == 0)  {
   if (bb23 == 1)  { 
    Serial.print("43");
    Serial.print(val23);
    Serial.println(); 
    bb21 = 0;
    }  }
   else if (bb23 == 0)  {
    Serial.print("43");
    Serial.print(val23);
    Serial.println(); 
    bb23 = 1;
    }     

if (Serial.available() > 0) {
   incomingByte = Serial.read();
      
   if (incomingByte == 'a'){
Serial.print(val0);
Serial.print(val1);
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
Serial.print(val22);
Serial.print(val23);
Serial.println();

} 
if (incomingByte == 'q'){
val0 = 0; 
val1 = 0;
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
val22 = 0;
val23 = 0;

bb0 = 0;
bb1 = 0;
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
bb22 = 0;
bb23 = 0;
}
  
}
  digitalWrite(12, LOW);
  delay(100);
  

}
