#include <OneWire.h>

	OneWire  ds(10);

	 
	void setup(void)

	{

	  Serial.begin(9600);

	  byte addr[8];

	  while(ds.search(addr))

	  {

	    for(int i = 0; i < 8; i++) Serial.print(addr[i], DEC);

            delay(1000); 

	    Serial.println();
delay(1000);

Serial.println();

delay(1000);

Serial.println();

delay(1000);

Serial.println();

	  }

	  ds.reset_search();

	}

	 

	void loop(void) {}

