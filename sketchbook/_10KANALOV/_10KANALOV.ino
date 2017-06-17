
int ledPin13 = 13;
;


// the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);
  pinMode(ledPin13, OUTPUT);
  
  
}

void loop() {
  
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
    
//    int iii; 
    
//    iii = 13;
            
    if (incomingByte == 'Q') {
      digitalWrite(13, HIGH);
    } 
    if (incomingByte == 'q') {
      digitalWrite(13, LOW);
    }
    
       
    if (incomingByte == 'a') {
      int val;
  val = digitalRead(13);  
 Serial.print(val);Serial.print(val);
Serial.print("qqq");
Serial.println();
Serial.print(val);Serial.print(val);
Serial.print("qqq");
Serial.println();
    } 
    
    
      
    
   
     
    
    
    
       
    
       
    
  }
}  
    
    
