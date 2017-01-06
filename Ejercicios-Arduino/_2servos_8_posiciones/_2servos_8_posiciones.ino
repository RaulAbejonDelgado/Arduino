
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
const int pinServo1 = 2 ;
const int pinServo2 = 3;
const int pinServo3 = 4;
const int pulsomin = 650;
const int pulsomax = 2550; 
int rotacion = 1325 ;
int var ;
void setup() {
servo1.attach(pinServo1, pulsomin, pulsomax) ;
servo2.attach(pinServo2, pulsomin, pulsomax) ;
servo3.attach(pinServo3, pulsomin, pulsomax) ;

}

void loop() {
  var = 0;
  if (var == 0){
    servo1.write(0);
    delay(1000);
    servo2.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(150);
    delay(500);
    var = 1 ;
       
  }
  if (var == 1 ){
    servo1.write(22);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(0);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(180);
    delay(500);
    var = 2 ;
  }
  if (var == 2){
    servo1.write(45);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(150);
    delay(500);
    var = 3 ; 
  }
  if (var == 3){
    servo1.write(67);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(65);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(250);
    servo3.write(90);
    delay(250);
     servo3.write(120);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(250);
    servo3.write(150);
    delay(250);
    var = 4 ; 
  }
   var = 4;
  if (var == 4){
    servo1.write(90);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
     servo3.write(0);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(140);
    delay(500);
    var = 5 ;

    
    
  }
  if (var == 5 ){
    servo1.write(110);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(150);
    delay(500);
    var = 6 ;
  }
 
  if (var == 6){
    servo1.write(130);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(120);
    delay(500);
    var = 7 ; 
  }
  if (var == 7 ){
    servo1.write(150);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(90);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(1200);
    delay(500);
    var = 8 ;
  }
 
  if (var == 8){
    servo1.write(180);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(120);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(45);
    delay(500);
    var = 9 ; 
  }
    if (var == 9){
    servo1.write(150);
    delay(1000);
    servo2.write(90);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(120);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(90);
    delay(500);
    var = 10 ;
       
  }
  if (var == 10 ){
    servo1.write(130);
    delay(1000);
     servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(150);
    delay(500);
    
    var = 11 ;
  }
  if (var == 12){
    servo1.write(110);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(120);
    delay(500);
    var = 13 ; 
  }
  if (var == 13){
    servo1.write(90);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(80);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(40);
    delay(500);
    var = 14 ; 
  }
   var = 14;
  if (var == 14){
    servo1.write(67);
    delay(1000);
    servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
     servo3.write(100);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(50);
    delay(500);
    var = 15 ;

    
    
  }
  if (var == 15 ){
    servo1.write(45);
    delay(1000);
    servo2.write(90);
    delay(1000);
    servo2.write(120);
    delay(500);
    var = 16 ;
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(70);
    delay(500);
  }
 
  if (var == 16){
    servo1.write(22);
    delay(1000);
     servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(70);
    delay(500);
    var = 17 ; 
  }
  if (var == 17 ){
    servo1.write(0);
    delay(1000);
     servo2.write(45);
    delay(1000);
    servo2.write(120);
    delay(500);
    servo3.write(45);// el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(500);
    servo3.write(70);
    delay(500);
    
    
    var = 2 ;
  }
 
 
}
