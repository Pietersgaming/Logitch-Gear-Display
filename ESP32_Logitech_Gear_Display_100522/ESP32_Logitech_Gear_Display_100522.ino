/*
 * Created by Pieter Kirby 
 * for use with Logitech shifter
 *
 * Please support by following/subscribing to my twitch account
 * www.twitch.tv/pietersgaming
 * 
 */
 
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Fonts/FreeSansOblique24pt7b.h>

  #define TFT_CS         5
  #define TFT_RST        4
  #define TFT_DC         2

  Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

const int GearX    = 39;  // connected to Latitude Potentiometer pin (RS232 pin #)
const int GearY    = 34;  // connected to Longitude Potentiometer pin (RS232 pin #)
                          // (RS232 pin #) connected to GND
                          // (RS232 pin #) connected to 3v3
const int LED_PINr = 27;  // Arduino pin connected to LED's pin
const int LED_PINb = 26;  // Arduino pin connected to LED's pin
const int LED_PINg = 14;  // Arduino pin connected to LED's pin

void setup() {
  pinMode(LED_PINr, OUTPUT);    // set arduino pin to output mode
  pinMode(LED_PINb, OUTPUT);    // set arduino pin to output mode
  pinMode(LED_PINg, OUTPUT);    // set arduino pin to output mode
  tft.initR(INITR_144GREENTAB); // Init ST7735R chip, green tab
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.println(" ");
  tft.println("   GEAR");
  tft.println(" ");
  tft.println("  DISPLAY");
  tft.println(" ");
  tft.setTextSize(1);
  tft.println("     Created By");
  tft.setTextSize(2);
  tft.println(" ");
  tft.println("CacoDeamon");
  delay(10000);
  tft.fillScreen(ST77XX_BLACK);
}

void loop() {
  int Latitude  = analogRead(GearX); // read the input on analog pin
  int Longitude = analogRead(GearY); // read the input on analog pin

  if((Latitude > 3500) && (Longitude > 2800)){
    digitalWrite(LED_PINr, HIGH);
    digitalWrite(LED_PINb, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(25, 95);
    tft.setTextColor(ST77XX_RED);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("R");
    delay(120);
       
} else if((Latitude > 3500) && (Longitude < 2800) && (Longitude > 2500)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("1");
    delay(120);
    
} else if((Latitude < 500) && (Longitude > 2500)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("2");
    delay(120);
        
} else if((Latitude > 3500) && (Longitude < 2500) && (Longitude > 1600)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("3");
    delay(120);
        
} else if((Latitude < 500) && (Longitude < 2500) && (Longitude > 1600)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("4");
    delay(120);
    
} else if((Latitude > 3500) && (Longitude < 1600) && (Longitude > 1300)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("5");
    delay(120);

} else if((Latitude < 500) && (Longitude < 1600)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("6");
    delay(120);

} else if((Latitude > 3500) && (Longitude < 1300) && (Longitude > 1000)){
    digitalWrite(LED_PINb, HIGH);
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINg, LOW);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(35, 95);
    tft.setTextColor(ST77XX_GREEN);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("7");
    delay(120);
    
}  else{
    digitalWrite(LED_PINr, LOW);
    digitalWrite(LED_PINb, LOW);
    digitalWrite(LED_PINg, HIGH);
    tft.fillRoundRect(25, 20, 80, 90, 8, ST77XX_BLACK);
    tft.setCursor(25, 95);
    tft.setTextColor(ST77XX_MAGENTA);
    tft.setFont(&FreeSansOblique24pt7b);
    tft.setTextSize(2);
    tft.println("N");
    delay(120);
}
}
