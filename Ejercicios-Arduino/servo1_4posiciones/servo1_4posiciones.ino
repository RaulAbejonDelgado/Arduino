
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
    delay(3000);
    var = 1 ;

    
    
  }
  if (var == 1 ){
    servo1.write(45);
    delay(3000);
    var = 2 ;
  }
  if (var == 2){
    servo1.write(90);
    delay(3000);
    var = 3 ; 
  }
  if (var == 3){
    servo1.write(180);
    delay(2000);
    var = 4 ; 
  }
   var = 4;
  if (var == 4){
    servo1.write(90);
    delay(3000);
    var = 5 ;

    
    
  }
  if (var == 5 ){
    servo1.write(45);
    delay(3000);
    var = 6 ;
  }
 
  if (var == 6){
    servo1.write(0);
    delay(2000);
    var = 1 ; 
  }
}
