
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
     if(temp=='a'){
      digitalWrite(led,1-digitalRead(led));
    Serial.println("1");
//    delay(2000); 

     }
  }
}


