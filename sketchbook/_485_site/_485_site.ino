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
//  int temp;
//  if(Serial.available())
//  {
//    temp=Serial.read();
//     if(temp=='V'){
//      digitalWrite(led,1-digitalRead(led));
    //Serial.print("V");
    //digitalWrite(13, HIGH);
    //delay(1000);
    //digitalWrite(13, LOW);
    digitalWrite(13, HIGH); 
    Serial.print ( 'V' );
    delay(2000);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    Serial.print ( 'B' );
    delay(2000);    


//    }
// }
}


