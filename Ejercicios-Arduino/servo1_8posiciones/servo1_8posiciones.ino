
#include <Servo.h>
Servo servo1;
const int pinServo = 2 ;
const int pulsomin = 650;
const int pulsomax = 2550; 
int rotacion = 1325 ;
int var ;
void setup() {
servo1.attach(pinServo, pulsomin, pulsomax) ; // put your setup code here, to run once:

}

void loop() {
  var = 0;
  if (var == 0){
    servo1.write(0); // el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(1000);
    var = 1 ;
       
  }
  if (var == 1 ){
    servo1.write(22);
    delay(1000);
    var = 2 ;
  }
  if (var == 2){
    servo1.write(45);
    delay(1000);
    var = 3 ; 
  }
  if (var == 3){
    servo1.write(67);
    delay(1000);
    var = 4 ; 
  }
   var = 4;
  if (var == 4){
    servo1.write(90);
    delay(1000);
    var = 5 ;

    
    
  }
  if (var == 5 ){
    servo1.write(110);
    delay(1000);
    var = 6 ;
  }
 
  if (var == 6){
    servo1.write(130);
    delay(1000);
    var = 7 ; 
  }
  if (var == 7 ){
    servo1.write(150);
    delay(1000);
    var = 8 ;
  }
 
  if (var == 8){
    servo1.write(180);
    delay(1000);
    var = 9 ; 
  }
    if (var == 9){
    servo1.write(150); // el valor del parentesis son los grados del servo 0 a180º o (min650 max2550)
    delay(1000);
    var = 10 ;
       
  }
  if (var == 10 ){
    servo1.write(130);
    delay(1000);
    var = 11 ;
  }
  if (var == 12){
    servo1.write(110);
    delay(1000);
    var = 13 ; 
  }
  if (var == 13){
    servo1.write(90);
    delay(1000);
    var = 14 ; 
  }
   var = 14;
  if (var == 14){
    servo1.write(67);
    delay(1000);
    var = 15 ;

    
    
  }
  if (var == 15 ){
    servo1.write(45);
    delay(1000);
    var = 16 ;
  }
 
  if (var == 16){
    servo1.write(22);
    delay(1000);
    var = 17 ; 
  }
  if (var == 17 ){
    servo1.write(0);
    delay(1000);
    var = 2 ;
  }
 
 
}
