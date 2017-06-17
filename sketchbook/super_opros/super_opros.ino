#include <OneWire.h>

	OneWire  ds(10);

	void setup(void)

	{
	  Serial.begin(115200);
	}

	void loop(void) {

   byte addr[8];

	  while(ds.search(addr))

	  {

	    for(int i = 0; i < 8; i++) Serial.print(addr[i], DEC);

	    Serial.println();

	  }

	  ds.reset_search();
          
          delay(250);
}


