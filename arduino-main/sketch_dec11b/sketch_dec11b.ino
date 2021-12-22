#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Define IR Sensors
int IRSensor1 = 7;
int IRSensor2 = 8;
int IRSensor3 = 9;
int IRSensor4 = 10;



void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);

  pinMode (IRSensor1, INPUT); // sensor pin INPUT
  pinMode (IRSensor2, INPUT); // sensor pin INPUT
  pinMode (IRSensor3, INPUT); // sensor pin INPUT
  pinMode (IRSensor4, INPUT); // sensor pin INPUT
}

void loop()
{
  int statusSensor1 = digitalRead (IRSensor1);
  int statusSensor2 = digitalRead (IRSensor2);
  int statusSensor3 = digitalRead (IRSensor3);
  int statusSensor4 = digitalRead (IRSensor4);

  lcd.clear();
  
  if (statusSensor1 == 0){
    Serial.println("Floor 1 Selected");
    lcd.print("1st Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
    delay(1000);
  }
  
  else if (statusSensor2 == 0){
    Serial.println("Floor 2 Selected");
    lcd.print("2nd Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
    delay(1000);
  }
  else if (statusSensor3 == 0){
    Serial.println("Floor 3 Selected");
    lcd.print("3rd Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
    delay(1000);
  }
  else if (statusSensor4 == 0){
    Serial.println("Floor 4 Selected");
    lcd.print("4th Floor");
    lcd.setCursor(7,1);
    lcd.print("Selected");
    delay(2000);
    lcd.clear();
    delay(1000);
  }
}
