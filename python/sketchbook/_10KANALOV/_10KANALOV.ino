
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


// the pin that the LED is attached to
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
  
  
}

void loop() {
  
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
    
    int iii; 
    
    iii = 2;
            
    if (incomingByte == 'Q') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'q') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'a') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("qqq");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("qqq");
Serial.println();
    } 
    
    
      
    
    iii = 3;
            
    if (incomingByte == 'W') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'w') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 's') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("www");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("www");
Serial.println();
    } 
    
     
     
     iii = 4;
            
    if (incomingByte == 'E') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'e') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'd') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("eee");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("eee");
Serial.println();
    } 
    
        
        
       iii = 5;
            
    if (incomingByte == 'R') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'r') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'd') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("rrr");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("rrr");
Serial.println();
    } 
    
     
   iii = 6;
            
    if (incomingByte == 'T') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 't') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'g') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("ttt");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("ttt");
Serial.println();
    } 
    
   iii = 7;
            
    if (incomingByte == 'Y') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'y') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'h') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("yyy");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("yyy");
Serial.println();
    }  
    
    
    iii = 8;
            
    if (incomingByte == 'U') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'u') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'j') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("uuu");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("uuu");
Serial.println();
    }  
    
iii = 9;
            
    if (incomingByte == 'I') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'i') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'k') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("iii");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("iii");
Serial.println();
    }  
     
       
       iii = 10;
            
    if (incomingByte == 'O') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'o') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'l') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("ooo");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("ooo");
Serial.println();
    }  
     
     iii = 11;
            
    if (incomingByte == 'P') {
      digitalWrite(iii, HIGH);
    } 
    if (incomingByte == 'p') {
      digitalWrite(iii, LOW);
    }
    
       
    if (incomingByte == 'L') {
      int val;
  val = digitalRead(iii);  
 Serial.print(val);Serial.print(val);
Serial.print("ppp");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("ppp");
Serial.println();
    }  
       
    
  }
}  
    
    
