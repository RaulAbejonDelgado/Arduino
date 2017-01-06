


int vuelta;
void setup() {
  // Activo el nº de pin a usar, y que es de salida.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}


void loop() {
  vuelta = 0 ;
  if(vuelta == 0){
  vuelta = vuelta + 1 ;  
  digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(12, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(8, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(1, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(0, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(0, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
 
  }
  

  if(vuelta == 2){
  digitalWrite(0, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(0, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 3){
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(1, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 4 ){
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 5 ){
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 6 ){
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
   if(vuelta == 7 ){
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(0, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 8 ){
  digitalWrite(0, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, LOW);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  
  if(vuelta == 9 ){
  digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, LOW);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  
  if(vuelta == 10 ){
  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
   
  if(vuelta == 11 ){
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, LOW);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 12 ){
  digitalWrite(0, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, LOW);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  if(vuelta == 13 ){
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }

  if(vuelta == 14 ){
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
 
  if(vuelta == 15 ){
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
   
  if(vuelta == 16 ){
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);              // wait for a second
  vuelta = vuelta + 1 ;
  delay(1000);
  }
   
  if(vuelta == 17 ){
  digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  vuelta = vuelta + 1 ;
  delay(2000);
  }
   
  if(vuelta == 18 ){
  digitalWrite(13, HIGH);
  delay (500);
  digitalWrite(13, LOW);
  delay (500);
  digitalWrite(12, HIGH);
  delay (500);
  digitalWrite(12, LOW);
  delay (500);
  digitalWrite(8, HIGH);
  delay (500);
  digitalWrite(8, LOW);
  delay (500);
  digitalWrite(7, HIGH);
  delay (500);
  digitalWrite(7, LOW);
  delay (500);
  digitalWrite(4, HIGH);
  delay (500);
  digitalWrite(4, LOW);
  delay (500);
  digitalWrite(2, HIGH);
  delay (500);
  digitalWrite(2, LOW);
  delay (500);
  digitalWrite(1, HIGH);
  delay (500);
  digitalWrite(1, LOW);
  delay (500);
  digitalWrite(0, HIGH);
  delay (500);
  digitalWrite(0, LOW);
  delay (500);
  vuelta = vuelta + 1 ;
  }
  
  if(vuelta == 19 ){
  digitalWrite(0, HIGH);  
  digitalWrite(1, HIGH);  
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  vuelta = vuelta + 1 ;
  delay(1000);
  }
  
  if(vuelta == 20 ){
  digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  vuelta = 0 ;
  delay(1000);
  
  } 
}
