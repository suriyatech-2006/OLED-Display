#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define LDR_PIN 34
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup()
{
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS))
  {
    Serial.println("SSD1306 allocation failed!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("OLED Display");
  display.println("LDR Light Level");
  display.display();

  delay(1000);
}

void loop()
{
  int lightLevel = analogRead(LDR_PIN);

  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("LDR Light Level");

  display.setTextSize(2);
  display.setCursor(0, 20);
  display.print(lightLevel);

  display.setTextSize(1);
  display.setCursor(0, 48);
  display.println("ADC: 0 - 4095");

  display.display();

  delay(500);
}