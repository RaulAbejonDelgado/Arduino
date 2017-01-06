int vuelta = 0 ;
  void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}
//0= estado alto 1 = estado bajo, lo se yo tmb aluflipo xD

void loop() {

if (vuelta == 0){
  digitalWrite(13, 1);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 1);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(3, 1);
  digitalWrite(2, 1);
  vuelta =  1 ;
  delay(2000);
}
if (vuelta == 1){
  digitalWrite(13, 0);   
  digitalWrite(12, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  vuelta = 2 ;
  delay(2000);
}
  
if(vuelta == 2){
    
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);             // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  vuelta = 3 ;
}
  
  if(vuelta == 3){
    
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);             // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second
  vuelta = 4 ;
  }
  if (vuelta == 4){
  digitalWrite(13, 1);   
  delay(500);
  digitalWrite(12, 1);
  delay(500);
  digitalWrite(8, 1);
  delay(500);
  digitalWrite(7, 1);
  delay(500);
  digitalWrite(5, 1);
  delay(500);
  digitalWrite(4, 1);
  delay(500);
  digitalWrite(3, 1);
  delay(500);
  digitalWrite(2, 1);
  delay(500);
  vuelta =  5 ;
  }
   if (vuelta == 5){
  digitalWrite(2, 0);   
  delay(500);
  digitalWrite(3, 0);
  delay(500);
  digitalWrite(4, 0);
  delay(500);
  digitalWrite(5, 0);
  delay(500);
  digitalWrite(7, 0);
  delay(500);
  digitalWrite(8, 0);
  delay(500);
  digitalWrite(12, 0);
  delay(500);
  digitalWrite(13, 0);
  delay(500);
  vuelta =  6 ;
   }
    if (vuelta == 6){
  digitalWrite(2, 1);   
  delay(500);
  digitalWrite(3, 1);
  delay(500);
  digitalWrite(4, 1);
  delay(500);
  digitalWrite(5, 1);
  delay(500);
  digitalWrite(7, 1);
  delay(500);
  digitalWrite(8, 1);
  delay(500);
  digitalWrite(12, 1);
  delay(500);
  digitalWrite(13, 1);
  delay(500);
  vuelta =  7 ;
  }
  
    if (vuelta == 7){
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    delay(1000);
    digitalWrite(8, 0);
    digitalWrite(7, 0);
    delay(1000);
    digitalWrite(5, 0);
    digitalWrite(4, 0);
    delay(1000);
    digitalWrite(3, 0);
    digitalWrite(2, 0);
    delay(1000);
    vuelta = 8;
    }
   if (vuelta == 8){
    digitalWrite(13, 1);
    digitalWrite(12, 1);
    delay(1000);
    digitalWrite(8, 1);
    digitalWrite(7, 1);
    delay(1000);
    digitalWrite(5, 1);
    digitalWrite(4, 1);
    delay(1000);
    digitalWrite(3, 1);
    digitalWrite(2, 1);
    delay(1000);
    vuelta = 9 ;
    }
     if (vuelta == 9){
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    delay(1000);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    delay(1000);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(1000);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    delay(1000);
    vuelta = 10 ;
    }
    if (vuelta == 10){
  digitalWrite(13, 0);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(5, 0);
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  digitalWrite(2, 1);
  delay(500);
  vuelta = 11 ;
    }
     if (vuelta == 11){
  digitalWrite(13, 1);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(5, 1);
  digitalWrite(4, 0);
  digitalWrite(3, 1);
  digitalWrite(2, 0);
  delay(500);
  vuelta = 12 ;
    }
  if (vuelta == 12){
  digitalWrite(13, 0);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(5, 0);
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  digitalWrite(2, 1);
  delay(500);
  vuelta = 13 ;
    }
     if (vuelta == 13){
  digitalWrite(13, 1);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(5, 1);
  digitalWrite(4, 0);
  digitalWrite(3, 1);
  digitalWrite(2, 0);
  delay(500);
 vuelta = 14;
    }
    if (vuelta == 14){
  digitalWrite(13, 1);   // los pongo en 1(curisomanete estado bajo)  
  digitalWrite(12, 1);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(3, 1);
  digitalWrite(2, 1);
    }
    }
  


