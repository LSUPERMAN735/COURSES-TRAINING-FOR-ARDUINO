#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>


Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);



void setup()   {
  
 

  display.begin();
  display.setContrast(30);
  display.clearDisplay(); 
 
  
}

void loop() {
  
  
  uint32_t VA0 = analogRead(A0);
//  display.println((1000 * VA0) / (1023 - VA0));
//  Serial.println((1000 * VA0) / (1023 - VA0));
//  delay(1000);
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.println("Hello, world!");

  delay(2000);
  
  
}
