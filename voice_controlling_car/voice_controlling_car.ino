
#include <SoftwareSerial.h>
#define in1 5 //L298n Motor Driver pins.
#define in2 6
#define in3 10
#define in4 11
#define LED1 A0
#define LED2 A1
#define LED3 A2
#define LED4 A3
SoftwareSerial BT(0, 1); //TX, RX 

String readvoice;

int RMF = 11; // IN1
int RMB = 10; //  IN2
int LMF = 6; // IN3
int LMB = 5; // IN4

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
   	pinMode (RMF, OUTPUT); 
  	pinMode (RMB, OUTPUT);
  	pinMode (LMF, OUTPUT);
  	pinMode (LMB, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

	}

void loop() {
  	while (BT.available()){ 
  	delay(10); 
  	char c = BT.read(); 
  	readvoice += c; 
  	} 

if (readvoice.length() > 0) {
    
    Serial.println(readvoice);

if(readvoice == "forward")
  	{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(RMF, LOW);
    digitalWrite (LMF, HIGH); //n1    left side all forward
    digitalWrite(RMB,HIGH);   //n2    right side all forward
    digitalWrite(LMB,LOW);
    delay(1000); 
    digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW); //n1    left side all forward
    digitalWrite(RMB,LOW);   //n2    right side all forward
    digitalWrite(LMB,LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    
    }
else if(readvoice == "backward")
  	{ 
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  	digitalWrite(RMF, HIGH);  //   n1 backward
    digitalWrite(LMF, LOW);
    digitalWrite(RMB, LOW);
    digitalWrite(LMB,HIGH);   // n2 backward
    delay(1000); 
    digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW); //n1    left side all forward
    digitalWrite(RMB,LOW);   //n2    right side all forward
    digitalWrite(LMB,LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    }
 else if (readvoice == "left")
  	{ 
     digitalWrite(LED1, HIGH);
     digitalWrite(LED3, HIGH);
  	digitalWrite (RMF,HIGH);
    digitalWrite (LMF,HIGH);
    digitalWrite (RMB,LOW);
    digitalWrite (LMB,LOW);
   	delay(350); 
    digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW); //n1    left side all forward
    digitalWrite(RMB,LOW);   //n2    right side all forward
    digitalWrite(LMB,LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    }
 else if ( readvoice == "right")
 	{
    digitalWrite(LED2, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite (RMF, LOW);
   	digitalWrite (LMF, LOW);
   	digitalWrite (RMB, HIGH);
   	digitalWrite (LMB, HIGH);
   	delay(350); 
    digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW); //n1    left side all forward
    digitalWrite(RMB,LOW);   //n2    right side all forward
    digitalWrite(LMB,LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED4, LOW);
    }
 else if (readvoice == "stop")
 	{
    digitalWrite (RMF, LOW);
   	digitalWrite (LMF, LOW);
  	digitalWrite (RMB, LOW);
   	digitalWrite (LMB, LOW);
  	delay (100);
    }
else if (readvoice == "off")
	{ 
    digitalWrite (RMF, LOW);
  	digitalWrite (LMF, LOW);
   	digitalWrite (RMB, LOW);
   	digitalWrite (LMB, LOW);
   	delay (100);
    }

readvoice="";
	}
}