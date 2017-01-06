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
 
 
  char commandbuffer[100];
  int i=0 ;
  int o=o;
  lcd.clear();
  if(Serial.available()){
     delay(5000);
     while( Serial.available() && i< 99) {
        commandbuffer[i++] = Serial.read();
     }
     commandbuffer[i++]='\0';
  }

  if(o / 2 == 0 ){
  
     lcd.setCursor(0,0);  
     Serial.println((char*)commandbuffer);
     lcd.print((char*)commandbuffer);
     delay(5000);
     o=o+3;
     
  }
  
  if(o/ 2 == 1){
  
     lcd.setCursor(0,1);  
     Serial.println((char*)commandbuffer);
     lcd.print((char*)commandbuffer);
     delay(5000);
     o=o+1;
     
     
  }
  
  
  
}

