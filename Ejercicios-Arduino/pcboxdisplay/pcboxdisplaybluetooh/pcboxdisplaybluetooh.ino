#include <Wire.h>  
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
String inData;
char commandbuffer[100];


void setup(){
  Serial.begin(9600);
  
  lcd.begin(16,2);
   for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
    lcd.noBacklight();
    delay(250);
    
  }
  lcd.backlight();
 
  
}


void loop() {
 int i=0;
  char commandbuffer[100];
  lcd.clear();
  if(Serial.available()){
     delay(100);
     while( Serial.available() && i< 99) {
        commandbuffer[i++] = Serial.read();
     }
     commandbuffer[i++]='\0';
  }

  if(i>0)

     Serial.println((char*)commandbuffer);
     lcd.print((char*)commandbuffer);
     delay(1000);
     lcd.clear();
}

