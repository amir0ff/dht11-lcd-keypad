#include <dht.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

dht DHT;

#define DHT11_PIN 2

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  delay(5000);
  DHT.read11(DHT11_PIN);
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
}
