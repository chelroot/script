// Подключаем библиотеку
#include <QuadDisplay.h>

// Допустим, индикатор подключен к 7-му пину
#define PIN 8

int val2;int val3;int val4;int val5;int val6;int val7; 
int val; 

int b11 = 0;int b12 = 0;int b13 = 0;int b14 = 0;int b15 = 0;int b16 = 0;
int b21 = 0;int b22 = 0;int b23 = 0;int b24 = 0;int b25 = 0;int b26 = 0;
int b31 = 0;int b32 = 0;int b33 = 0;int b34 = 0;int b35 = 0;int b36 = 0;
int b41 = 0;int b42 = 0;int b43 = 0;int b44 = 0;int b45 = 0;int b46 = 0;
int b51 = 0;int b52 = 0;int b53 = 0;int b54 = 0;int b55 = 0;int b56 = 0;
int b61 = 0;int b62 = 0;int b63 = 0;int b64 = 0;int b65 = 0;int b66 = 0;


int tt=10;

int incomingByte;      

void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  // initialize the LED pin as an output:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
    
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  
  
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);
  }  
  
// the loop function runs over and over again forever
void loop() {
    
  digitalWrite(A0, HIGH);
  digitalWrite(13, HIGH); 
  delay(tt);
  
      
  val = digitalRead(2);
  if (val == 0)  {
   if (b11 == 1)  {Serial.print("Q"); 
    b11 = 0;   }  }
   else if (b11 == 0)  {Serial.print("q"); displayInt(PIN, 11);
    b11 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b12 == 1)  {Serial.print("W"); 
    b12 = 0;   }  }
   else if (b12 == 0)  {Serial.print("w"); displayInt(PIN, 12);
    b12 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b13 == 1)  {Serial.print("E"); 
    b13 = 0;   }  }
   else if (b13 == 0)  {Serial.print("e"); displayInt(PIN, 13);
    b13 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b14 == 1)  {Serial.print("R"); 
    b14 = 0;   }  }
   else if (b14 == 0)  {Serial.print("r"); displayInt(PIN, 14);
    b14 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b15 == 1)  {Serial.print("T"); 
    b15 = 0;   }  }
   else if (b15 == 0)  {Serial.print("t"); displayInt(PIN, 15);
    b15 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b16 == 1)  {Serial.print("Y"); 
    b16 = 0;   }  }
   else if (b16 == 0)  {Serial.print("y"); displayInt(PIN, 16);
    b16 = 1;     } 
 
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW); 
///////////////////////////////////////////////////////////////////////
  digitalWrite(A1, HIGH);
  delay(tt);
  
  
  val = digitalRead(2);
  if (val == 0)  {
   if (b21 == 1)  {Serial.print("U");
    b21 = 0;   }  }
   else if (b21 == 0)  {Serial.print("u");displayInt(PIN, 21);
    b21 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b22 == 1)  {Serial.print("I");
    b22 = 0;   }  }
   else if (b22 == 0)  {Serial.print("i");displayInt(PIN, 22);
    b22 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b23 == 1)  {Serial.print("O"); 
    b23 = 0;   }  }
   else if (b23 == 0)  {Serial.print("o"); displayInt(PIN, 23);
    b23 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b24 == 1)  {Serial.print("P"); 
    b24 = 0;   }  }
   else if (b24 == 0)  {Serial.print("p"); displayInt(PIN, 24);
    b24 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b25 == 1)  {Serial.print("A"); 
    b25 = 0;   }  }
   else if (b25 == 0)  {Serial.print("a"); displayInt(PIN, 25);
    b25 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b26 == 1)  {Serial.print("S"); 
    b26 = 0;   }  }
   else if (b26 == 0)  {Serial.print("s"); displayInt(PIN, 26);
    b26 = 1;     } 
 

  
  
  digitalWrite(A1, LOW);
  //////////////////////////////////
  digitalWrite(A2, HIGH);
  delay(tt);
  
  
  val = digitalRead(2);
  if (val == 0)  {
   if (b31 == 1)  {Serial.print("D");
    b31 = 0;   }  }
   else if (b31 == 0)  {Serial.print("d");displayInt(PIN, 31);
    b31 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b32 == 1)  {Serial.print("F");
    b32 = 0;   }  }
   else if (b32 == 0)  {Serial.print("f");displayInt(PIN, 32);
    b32 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b33 == 1)  {Serial.print("G"); 
    b33 = 0;   }  }
   else if (b33 == 0)  {Serial.print("g"); displayInt(PIN, 33);
    b33 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b34 == 1)  {Serial.print("H"); 
    b34 = 0;   }  }
   else if (b34 == 0)  {Serial.print("h"); displayInt(PIN, 34);
    b34 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b35 == 1)  {Serial.print("J"); 
    b35 = 0;   }  }
   else if (b35 == 0)  {Serial.print("j"); displayInt(PIN, 35);
    b35 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b36 == 1)  {Serial.print("K"); 
    b36 = 0;   }  }
   else if (b36 == 0)  {Serial.print("k"); displayInt(PIN, 36);
    b36 = 1;     } 
 

  
  
  digitalWrite(A2, LOW);
  //////////////////////////////////
  digitalWrite(A3, HIGH);
  delay(tt);
  
  
  val = digitalRead(2);
  if (val == 0)  {
   if (b41 == 1)  {Serial.print("L");
    b41 = 0;   }  }
   else if (b41 == 0)  {Serial.print("l");displayInt(PIN, 41);
    b41 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b42 == 1)  {Serial.print("Z");
    b42 = 0;   }  }
   else if (b42 == 0)  {Serial.print("z");displayInt(PIN, 42);
    b42 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b43 == 1)  {Serial.print("X"); 
    b43 = 0;   }  }
   else if (b43 == 0)  {Serial.print("x");displayInt(PIN, 43); 
    b43 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b44 == 1)  {Serial.print("C"); 
    b44 = 0;   }  }
   else if (b44 == 0)  {Serial.print("c"); displayInt(PIN, 44);
    b44 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b45 == 1)  {Serial.print("V"); 
    b45 = 0;   }  }
   else if (b45 == 0)  {Serial.print("v"); displayInt(PIN, 45);
    b45 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b46 == 1)  {Serial.print("B"); 
    b46 = 0;   }  }
   else if (b46 == 0)  {Serial.print("b"); displayInt(PIN, 46);
    b46 = 1;     } 

  
  
  
  digitalWrite(A3, LOW);
  //////////////////////////////////
  digitalWrite(A4, HIGH);
  delay(tt);
  
  
    val = digitalRead(2);
  if (val == 0)  {
   if (b51 == 1)  {Serial.print("N");
    b51 = 0;   }  }
   else if (b51 == 0)  {Serial.print("n");displayInt(PIN, 51);
    b51 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b52 == 1)  {Serial.print("M");
    b52 = 0;   }  }
   else if (b52 == 0)  {Serial.print("m");displayInt(PIN, 52);
    b52 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b53 == 1)  {Serial.print("<"); 
    b53 = 0;   }  }
   else if (b53 == 0)  {Serial.print(",");displayInt(PIN, 53); 
    b53 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b54 == 1)  {Serial.print(">"); 
    b54 = 0;   }  }
   else if (b54 == 0)  {Serial.print("."); displayInt(PIN, 54);
    b54 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b55 == 1)  {Serial.print("?"); 
    b55 = 0;   }  }
   else if (b55 == 0)  {Serial.print("/"); displayInt(PIN, 55);
    b55 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b56 == 1)  {Serial.print(":"); 
    b56 = 0;   }  }
   else if (b56 == 0)  {Serial.print(";"); displayInt(PIN, 56);
    b56 = 1;     }   
  
  
  digitalWrite(A4, LOW);
  //////////////////////////////////
  digitalWrite(A5, HIGH);
  delay(tt);
  
     val = digitalRead(2);
  if (val == 0)  {
   if (b61 == 1)  {Serial.print("N");
    b61 = 0;   }  }
   else if (b61 == 0)  {Serial.print("n");displayInt(PIN, 61);
    b61 = 1;     }
    
  val = digitalRead(3);
  if (val == 0)  {
   if (b62 == 1)  {Serial.print("M");
    b62 = 0;   }  }
   else if (b62 == 0)  {Serial.print("m");displayInt(PIN, 62);
    b62 = 1;     }
  
  val = digitalRead(4);
  if (val == 0)  {
   if (b63 == 1)  {Serial.print("<"); 
    b63 = 0;   }  }
   else if (b63 == 0)  {Serial.print(","); displayInt(PIN, 63);
    b63 = 1;     }  
  
  val = digitalRead(5);  
  if (val == 0)  {
   if (b64 == 1)  {Serial.print(">"); 
    b64 = 0;   }  }
   else if (b64 == 0)  {Serial.print("."); displayInt(PIN, 64);
    b64 = 1;     }
  
  val = digitalRead(6);
  if (val == 0)  {
   if (b65 == 1)  {Serial.print("?"); 
    b65 = 0;   }  }
   else if (b65 == 0)  {Serial.print("/"); displayInt(PIN, 65);
    b65 = 1;     }  
    
  val = digitalRead(7); 
  if (val == 0)  {
   if (b66 == 1)  {Serial.print(":"); 
    b66 = 0;   }  }
   else if (b66 == 0)  {Serial.print(";"); displayInt(PIN, 66);
    b66 = 1;     }   

  
  
  
  digitalWrite(A5, LOW);
    
  
  

if (Serial.available() > 0) {
   incomingByte = Serial.read();
 
    
   if (incomingByte == '1'){
   digitalWrite(12, HIGH);

   Serial.println();

   } 
   
   if (incomingByte == '2'){
   digitalWrite(12, LOW);


}
  
}
  
  

}
