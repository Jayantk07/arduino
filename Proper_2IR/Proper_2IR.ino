#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int IRSensor1 = 6;
int IRSensor2 = 7;// connect ir sensor to arduino pin 2
 // conect Led to arduino pin 13




void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);


  pinMode (IRSensor1, INPUT); // sensor pin INPUT
  pinMode (IRSensor2, INPUT); // sensor pin INPUT
//  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor1);
  int statusSensoor = digitalRead (IRSensor2);
  
  if (statusSensor == 0){
    Serial.println("1st Floor Selected");
    lcd.print("1st Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
//    digitalWrite(LED, HIGH); // LED LOW
    delay(1000);
  }
  else if (statusSensoor == 1){
    Serial.println("2nd Floor Selected");
    lcd.print("2nd Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
//    digitalWrite(LED, HIGH); // LED LOW
    delay(1000);
    }
//  else
//  {
//    digitalWrite(LED, LOW); // LED High
//  }
  
}
