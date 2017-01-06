int estadoActual = 0 ;
int estadoAnteri = 0 ;
int salid = 0 ;

void setup() {
pinMode(8,INPUT); //declaramos el boton de entrada
pinMode(4, OUTPUT); // declaramos el led como salida
}

void loop() {
 estadoActual = digitalRead(8); 
 if ((estadoActual == HIGH ) && (estadoAnteri = LOW)) {
  salid = 1 - salid ; 
 }
 if(salid == 1) { //si esta pulsada el boton
 
 digitalWrite(4,HIGH); //enciende el led
 }
    else {
      digitalWrite(4,LOW); // si no apaga el led
         }

}
