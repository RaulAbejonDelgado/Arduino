
#include <Wire.h>  

#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

/*-----( Declare Variables )-----*/
//NONE

void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  Serial.begin(9600);  // Used to type in characters

  lcd.begin(16,2);   // initialize the lcd for 16 chars 2 lines, turn on backlight

// ------- Quick 3 blinks of backlight  -------------
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  lcd.backlight(); // finish with backlight on  

//-------- Write characters on the display ------------------
// NOTE: Cursor Position: (CHAR, LINE) start at 0  
  
}/*--(end setup )---*/


void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{
  {
    // when characters arrive over the serial port...
    if (Serial.available()) {
      // wait a bit for the entire message to arrive
      delay(100);
      // clear the screen
      lcd.clear();
      // read all the available characters
      while (Serial.available() > 0) {
        // display each character to the LCD
        lcd.write(Serial.read());
      }
    }
  }
lcd.setCursor(0,0); //Start at character 4 on line 0
  lcd.print("Bienvenido a....");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("Pcbox Barakaldo");
  delay(3000);  
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Especializados..");
  lcd.setCursor(0,1);
  lcd.print("...En tecnologia");  
  delay(3000);
   lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Lo ultimo en....");
  lcd.setCursor(0,1);
  lcd.print("......Portatiles");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Pc Gaming.......");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(".....A tu medida");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Escoge tus......");
  lcd.setCursor(0,1);
  lcd.print(".....componentes");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("smartphones.....");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print(".........Wiko!!!");  
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Reparacion y.... ");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("...mantenimiento");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Informatico.....");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("y electronico ;-)");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Kits de Arduino... ");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("Y mucho mas en....");  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0); //Start at character 0 on line 0
  lcd.print("Pcbox Barakaldo");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("Tlfn 944970643");  
  delay(3000);

}/* --(end main loop )-- */


/* ( THE END ) */


