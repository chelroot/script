#include <OneWire.h>

	OneWire  ds(10);
        int incomingByte;

	void setup(void)

	{
	  Serial.begin(115200);
	}

	void loop(void) {  
  
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
         
     
    if (incomingByte == 'a') {

      byte addr[8];

	  while(ds.search(addr))

	  {

	    for(int i = 0; i < 8; i++) Serial.print(addr[i], DEC);

	    Serial.println();

	  }

	  ds.reset_search();
Serial.println("DONE");
          
} 
}
}
