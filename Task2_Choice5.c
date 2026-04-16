#include <Wire.h>
#include <LiquidCrystal_I2C.h>


int c=0;
LiquidCrystal_I2C lcd(0x27,  16, 2);
const int ir=3;
bool a=1;
void setup()
{
  lcd.init();
  lcd.clear();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(ir,INPUT_PULLUP);
  
}
void loop()
{
  int m=digitalRead(ir);
  if (!m && a)
  {
    c++;
    delay(200);
  }
  Serial.println(c);
  lcd.setCursor(0,0);
  lcd.print("Count : ");
  lcd.setCursor(0,1);
  lcd.print(c);
  a=m;}
  
