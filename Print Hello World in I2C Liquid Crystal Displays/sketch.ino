#include<LiquidCrystal_I2C.h>

#define I2C_ADDR   0x27
#define LCD_COLUMNS 20
#define LCD_LINE    4

 LiquidCrystal_I2C Icd(I2C_ADDR, LCD_COLUMNS,LCD_LINE);

void setup() {
  // put your setup code here, to run once:
  Icd.init();
  //Icd.begin();
  Icd.backlight();
  Icd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
Icd.setCursor(0,0);
Icd.print("Hello, World!");
}
