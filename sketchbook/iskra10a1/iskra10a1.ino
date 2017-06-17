
int val2;int val3;int val4;int val5;int val6;int val7; 
int val; 

int b11 = 0; int b12 = 0;int b13 = 0;int b14 = 0;int b15 = 0;int b16 = 0;
int b2b2 = 0;int b2b3 = 0;int b2b4 = 0;int b2b5 = 0;int b2b6 = 0;int b2b7 = 0;
int b3b2 = 0;int b3b3 = 0;int b3b4 = 0;int b3b5 = 0;int b3b6 = 0;int b3b7 = 0;
int b4b2 = 0;int b4b3 = 0;int b4b4 = 0;int b4b5 = 0;int b4b6 = 0;int b4b7 = 0;
int b5b2 = 0;int b5b3 = 0;int b5b4 = 0;int b5b5 = 0;int b5b6 = 0;int b5b7 = 0;
int b6b2 = 0;int b6b3 = 0;int b6b4 = 0;int b6b5 = 0;int b6b6 = 0;int b6b7 = 0;


int tt=10;

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
  
  
  pinMode(13, OUTPUT);
  
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  }  
  
// the loop function runs over and over again forever
void loop() {
    
  digitalWrite(A0, HIGH);
  digitalWrite(13, HIGH); 
  delay(tt);
  
      
  val = digitalRead(2);
  if (val == 0)  {
   if (b11 == 1)  {Serial.print("11");Serial.print(val);Serial.println(); 
    b11 = 0;   }  }
   else if (b11 == 0)  {Serial.print("11");Serial.print(val);Serial.println(); 
    b11 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b12 == 1)  {Serial.print("12");Serial.print(val);Serial.println(); 
    b12 = 0;   }  }
   else if (b12 == 0)  {Serial.print("12");Serial.print(val);Serial.println(); 
    b12 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b13 == 1)  {Serial.print("13");Serial.print(val);Serial.println(); 
    b13 = 0;   }  }
   else if (b13 == 0)  {Serial.print("13");Serial.print(val);Serial.println(); 
    b13 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b14 == 1)  {Serial.print("14");Serial.print(val);Serial.println(); 
    b14 = 0;   }  }
   else if (b14 == 0)  {Serial.print("14");Serial.print(val);Serial.println(); 
    b14 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b15 == 1)  {Serial.print("15");Serial.print(val);Serial.println(); 
    b15 = 0;   }  }
   else if (b15 == 0)  {Serial.print("15");Serial.print(val);Serial.println(); 
    b15 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b16 == 1)  {Serial.print("16");Serial.print(val);Serial.println(); 
    b16 = 0;   }  }
   else if (b16 == 0)  {Serial.print("16");Serial.print(val);Serial.println(); 
    b16 = 1;     } 
 
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

//Serial.print(val2);
//Serial.print(val3);
//Serial.print(val4);
//Serial.print(val5);
//Serial.print(val6);
//Serial.print(val7);


Serial.println();

} 
if (incomingByte == 'q'){

//val2 = 0;
//val3 = 0; 
//val4 = 0;
//val5 = 0; 
//val6 = 0;
//val7 = 0;

b11 = 0;
b12 = 0;
b13 = 0;
b14 = 0;
b15 = 0;
b16 = 0;

}
  
}
  
  

}
