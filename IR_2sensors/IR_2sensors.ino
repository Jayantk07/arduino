#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>

//int IRSensor = 8; // connect ir sensor to arduino pin 2
int LED_1 = 3; // conect Led to arduino pin 3
int LED_1 = 4; // conect Led to arduino pin 4

int RECV_PIN_1 = 8;
int RECV_PIN_2 = 9;
IRrecv irrecv1(RECV_PIN_1);
IRrecv irrecv2(RECV_PIN_2);



void setup() 
{

  Serial.begin(9600);
  irrecv1.enableIRIn();
  irrecv2.enableIRIn(); 


  pinMode (RECV_PIN_1, INPUT); // sensor pin 1 INPUT
  pinMode (RECV_PIN_2, INPUT); // sensor pin 2 INPUT
  pinMode (LED_1, OUTPUT); // Led 1 pin OUTPUT
  pinMode (LED_2, OUTPUT); // Led 2 pin OUTPUT
}

void loop()
{

  if (irrecv1.decode(&results))
    {

      if (results.value == 428946) {
        Serial.println(“BUTTON PRESSED FOR SENSOR 1”);
      }
      else {
        Serial.print(" SENSOR 1 : ");
        Serial.println(results.value );
      }
      results.value = 0;
      irrecv1.resume(); // Receive the next value
      
      }
      
      if (irrecv2.decode(&results))
      {
      if (results.value == 428946) {
      Serial.println(“BUTTON PRESSED FOR SENSOR 2”);
      }
      else {
      Serial.print(" SENSOR 2 : ");
      Serial.println(results.value );
      results.value = 0;
      }
      irrecv2.resume(); // Receive the next value
      
     }

  
//  int statusSensor = digitalRead (IRSensor);
//  
//  if (statusSensor == 1){
//    Serial.println("Off");
//    digitalWrite(LED, LOW); // LED LOW
//    delay(1000);
//  }
//  
//  else
//  {
//    Serial.println("Onn");
//    digitalWrite(LED, HIGH); // LED High
//    delay(1000);
//  }
  
}
