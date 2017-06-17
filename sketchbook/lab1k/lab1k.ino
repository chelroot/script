
int ledPin13 = 13;
int incomingByte;      
void setup() {
  Serial.begin(115200);
  pinMode(ledPin13, OUTPUT);
}
void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
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
    
    
    
    
    
    
