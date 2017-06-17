//digitalWrite(13, HIGH);

/*
# This sample codes is for testing the RS485 shiled(automatic transmission mode).
# Editor : YouYou
# Date   : 2013.9.16
# Ver    : 0.1
# Product: RS485 shield
# SKU    : DFR0259
*/
int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop()
{
  int temp;
  if(Serial.available())
  {
    temp=Serial.read();
     if(temp=='V'){
      //digitalWrite(led,1-digitalRead(led));
      digitalWrite(13, HIGH);
      delay(1300);
      digitalWrite(13, LOW);
      
    Serial.println("OK");
     }
  }
}
