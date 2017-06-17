
int ledPin13 = 13;
int incomingByte;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin13, OUTPUT);
  }
void loop() {
  if (Serial.available() > 0) {

    incomingByte = Serial.read();
        
    if (incomingByte == 'a') {
      digitalWrite(13, HIGH);
    } 
    if (incomingByte == 'b') {
      digitalWrite(13, LOW);
    }
    
       
   
    
      
    
   
     
    
    
    
       
    
       
    
  }
}  
    
    
