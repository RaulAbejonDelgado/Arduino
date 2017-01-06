int estado = 0 ;
int salida = 0 ;
void setup() {
pinMode(8,INPUT); //declaramos el boton de entrada
pinMode(4, OUTPUT); // declaramos el led como salida
}

void loop() {
 estado = digitalRead(8); //leer el boton y guardamos en estado
 if (estado == HIGH ) {
  salida = 1 - salida; 
 }
 if(salida == 1) { //si esta pulsada el boton
 
 digitalWrite(4,HIGH); //enciende el led
 }
    else {
      digitalWrite(4,LOW); // si no apaga el led
         }

}
