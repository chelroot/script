#include <OneWire.h>

	OneWire  ds(10);

	void setup(void)


	{
	  Serial.begin(115200);
	
   pinMode(13, OUTPUT);
}

	void loop(void) {

   byte addr[8];

	  while(ds.search(addr))

	  {

	    for(int i = 0; i < 8; i++) Serial.print(addr[i], DEC);

	    Serial.println();

	  }

	  ds.reset_search();
          
          digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(125);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(125);              // wait for a second
}


