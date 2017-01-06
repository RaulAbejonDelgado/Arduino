
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
  if (rotacion <= 1325 ||  var == 3){
    servo1.write(pulsomin);
    delay(3000);
    var = 1 ;

    
    
  }
  if (var == 1 || rotacion == pulsomin){
    servo1.write(pulsomax);
    delay(3000);
    var = 2 ;
  }
  if (var == 2){
    servo1.write(1325);
    delay(3000);
    var = 3 ; 
  }
}
