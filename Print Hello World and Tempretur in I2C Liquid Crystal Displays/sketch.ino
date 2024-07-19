#include<LiquidCrystal_I2C.h>
#include <DHT22.h>

#define I2C_ADDR   0x27
#define LCD_COLUMNS 20
#define LCD_LINE    4

#define pinData 2 

float T_fix =25;

 LiquidCrystal_I2C Icd(I2C_ADDR, LCD_COLUMNS,LCD_LINE);

 DHT22 dht22cns(pinData);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Icd.init();
  //Icd.begin();
  Icd.backlight();
  Icd.clear();

}


void loop() {
  // put your main code here, to run repeatedly:
float h =  dht22cns.getHumidity();
float temp = dht22cns.getTemperature();

Icd.clear();
Icd.setCursor(0,1);
Icd.print("T:");
Icd.print(temp);

Icd.setCursor(6,1);
Icd.print(" H ");
Icd.print(h);

if(T_fix < temp){
  Icd.setCursor(3,0);
  Icd.print("Over Heat"); 
} else if(T_fix > temp){
  Icd.setCursor(3,0);
  Icd.print("Cool"); 

} else{
  Icd.setCursor(3,0);
  Icd.print("Temp is ok"); 
}

delay(1000);

}