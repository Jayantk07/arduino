int IRSensor = 8; // connect ir sensor to arduino pin 2
int LED = 3; // conect Led to arduino pin 13



void setup() 
{



  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    Serial.println("Off");
    digitalWrite(LED, LOW); // LED LOW
    delay(1000);
  }
  
  else
  {
    Serial.println("Onn");
    digitalWrite(LED, HIGH); // LED High
    delay(1000);
  }
  
}
