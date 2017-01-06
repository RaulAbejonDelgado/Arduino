#include <Arduino.h>
#include <NECIRrcv.h>
#define IRPIN 8   // pin al que conectamos el receptor de IR
static int aux = 1;
NECIRrcv ir(IRPIN) ;
void setup()
{
  Serial.begin(9600) ;
  Serial.println("NEC IR codigo recepcion") ;
  ir.begin() ;
}
void loop()
{
  unsigned long ircode ;
  while (ir.available()) { 
    ircode = ir.read() ;  
    Serial.println(ircode) ; 
  }
}

