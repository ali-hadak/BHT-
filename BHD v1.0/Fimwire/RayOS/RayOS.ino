#include <ESP8266WiFi.h>
#include <LiquidCrystal_I2C.h>

#define upButton D3
#define okButton D4
#define downButton D5

int okButton_d = digitalRead(okButton);
int upButton_d = digitalRead(upButton);
int downButton_d = digitalRead(downButton);

int networkCount = WiFi.scanNetworks();
int networkCount2 = WiFi.scanNetworks();

byte unselectedBox[8] = {
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111
};

byte selectedBox[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

LiquidCrystal_I2C lcd(0x27, 16,2);
void setup() {
  lcd.begin();

  pinMode(upButton, INPUT_PULLUP);
  pinMode(okButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);

  lcd.createChar(0, unselectedBox);
  lcd.createChar(1, selectedBox);
}

void loop() {
  int okButton_d = digitalRead(okButton);
  int upButton_d = digitalRead(upButton);
  int downButton_d = digitalRead(downButton);
  
  lcd.setCursor(0,0);
  lcd.print("open: RayOS");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print(".");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("..");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("...");
  delay(1000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("open: Sys_files");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print(".");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("..");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("...");
  delay(1000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("open: Desktop");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print(".");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("..");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("...");
  delay(1000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("open: System");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print(".");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("..");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.print("...");
  delay(1000);

  lcd.clear();
  delay(1000);

  lcd.setCursor(5, 0);
  lcd.print("RayOS");

  lcd.setCursor(0, 1);
  lcd.write(1);
  lcd.setCursor(1, 1);
  lcd.write(1);
  delay(1000);

  lcd.setCursor(2, 1);
  lcd.write(1);
  lcd.setCursor(3, 1);
  lcd.write(1);
  delay(500);

  lcd.setCursor(4, 1);
  lcd.write(1);
  lcd.setCursor(5, 1);
  lcd.write(1);
  lcd.setCursor(6, 1);
  lcd.write(1);
  lcd.setCursor(7, 1);
  lcd.write(1);
  delay(200);

  lcd.setCursor(8, 1);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  lcd.setCursor(10, 1);
  lcd.write(1);
  lcd.setCursor(11, 1);
  lcd.write(1);
  delay(500);

  lcd.setCursor(12, 1);
  lcd.write(1);
  lcd.setCursor(13, 1);
  lcd.write(1);
  lcd.setCursor(14, 1);
  lcd.write(1);
  delay(2000);

  lcd.setCursor(15, 1);
  lcd.write(1);
  delay(1000);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.write(1);
  lcd.print("fake_network");

  lcd.setCursor(0, 1);
  lcd.write(0);
  lcd.print("app_manager");

  int okButton_d = digitalRead(okButton);
  int upButton_d = digitalRead(upButton);
  int downButton_d = digitalRead(downButton);

  if (downButton_d == 1) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.write(0);
    lcd.print("fake_network");

    lcd.setCursor(0, 1);
    lcd.write(1);
    lcd.print("app_manager");

    delay(1500);

    int okButton_d = digitalRead(okButton);
    int upButton_d = digitalRead(upButton);
    int downButton_d = digitalRead(downButton);

    if (okButton_d == 1) {
      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.write(1);
      lcd.print("wifi_scanner");

      lcd.setCursor(0, 1);
      lcd.write(0);
      lcd.print("settings");

      delay(1500);

      int okButton_d = digitalRead(okButton);
      int upButton_d = digitalRead(upButton);
      int downButton_d = digitalRead(downButton);

      if (okButton_d == 1) {
        lcd.setCursor(0, 3);
        lcd.print("Scanning..");

        lcd.setCursor(0, 1);
        lcd.write(1);
        lcd.setCursor(1, 1);
        lcd.write(1);
        delay(1000);

        lcd.setCursor(2, 1);
        lcd.write(1);
        lcd.setCursor(3, 1);
        lcd.write(1);
        delay(500);

        lcd.setCursor(4, 1);
        lcd.write(1);
        lcd.setCursor(5, 1);
        lcd.write(1);
        lcd.setCursor(6, 1);
        lcd.write(1);
        lcd.setCursor(7, 1);
        lcd.write(1);
        delay(200);

        lcd.setCursor(8, 1);
        lcd.write(1);
        lcd.setCursor(9, 1);
        lcd.write(1);
        lcd.setCursor(10, 1);
        lcd.write(1);
        lcd.setCursor(11, 1);
        lcd.write(1);
        delay(500);

        lcd.setCursor(12, 1);
        lcd.write(1);
        lcd.setCursor(13, 1);
        lcd.write(1);
        lcd.setCursor(14, 1);
        lcd.write(1);
        delay(2000);

        lcd.setCursor(15, 1);
        lcd.write(1);
        delay(1000);

        lcd.clear();

        lcd.setCursor(0, 0);
        lcd.print("2 WiFi finded!");
        delay(1500);

        lcd.clear();

        lcd.setCursor(0,0);
        lcd.print("1: ", networkCount);

        lcd.setCursor(0,0);
        lcd.print("2: ", networkCount2);

        delay(2500);

        else if (downButton_d == 1) {
          int okButton_d = digitalRead(okButton);
          int upButton_d = digitalRead(upButton);
          int downButton_d = digitalRead(downButton);

          if (okButton_d == 1) {
            lcd.clear();
            
            lcd.setCursor(0, 0);
            lcd.print("OS: RayOS vBETA");  

            lcd.setCursor(0, 0);
            lcd.print("Device: BHD v1"); 

            delay(5000);
          }
        }
      }
    }
  }

  int okButton_d = digitalRead(okButton);
  int upButton_d = digitalRead(upButton);
  int downButton_d = digitalRead(downButton);

  else if (okButton_d == 1) {
    delay(1500);
    
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("create:fake wifi");

    lcd.setCursor(0, 1);
    lcd.print(".");
    delay(1000);

    lcd.setCursor(0, 1);
    lcd.print("..");
    delay(1000);

    lcd.setCursor(0, 1);
    lcd.print("...");
    delay(1000);

    const char* fake_ssid = "FreeWiFi_5G";

    WiFi.mode(WIFI_AP);
    WiFi.softAP(fake_ssid);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("fake wifi was");

    lcd.setCursor(0, 1);
    lcd.print("Ceated!");

    delay(2000);
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("ssid:");

    lcd.setCursor(0, 1);
    lcd.print(fake_ssid);
    
  }

  delay(5000);
  lcd.clear();
  
}
