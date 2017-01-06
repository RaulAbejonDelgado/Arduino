   int estado = 0 ; //guarda el estado del boton
   int estadoAnterior = 0 ;// guarda el estado anterior del boton
int salida = 0 ;
void setup() {
pinMode(8,INPUT); //declaramos el boton de entrada
pinMode(4, OUTPUT); // declaramos el led como salida
}

void loop() {
 estado = digitalRead(8); //leer el boton y guardamos en estado
 if ((estado == HIGH ) && (estadoAnterior == LOW )) {
  salida = 1 - salida; 
  delay(20);
 }
 estadoAnterior = estado;
 if(salida == 1) { //si esta pulsada el boton
 
 digitalWrite(4,HIGH); //enciende el led
 }
    else {
      digitalWrite(4,LOW); // si no apaga el led
         }

}
