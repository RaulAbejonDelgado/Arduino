int estadoac = 0; //declaro la variable estadoac a 0 al inicio del programa o reset, 
int estadoan = 0; //declaro estadoan a 0 ya que no puede tener otro valor al inicio
int salida = 0; //declaro la variable salida , guardara el valer del estado en funcion si se pulso o no el botn
void setup() {
pinMode(8,INPUT); //indico que el pin numero 8 es de entrada ya que lo tengo en serie con el boton con un cable
pinMode(4,OUTPUT); //indico que el pin numero 4 es de salida y con un cable lo conecto al anado del un led 


}

void loop() {
estadoac = digitalRead(8);  // le digo que me guarde el valor de lectura de la entrada pin8 en este caso el valor de pulsacion del boton y me lo guarde en estadoac
if ((estadoac == HIGH) && (estadoan == LOW)) {  //le pregunto que si estadoac es HIGH,1, se ha pulsado y el estadoac esta a 0 es como un enclavamiento de retardo de scan
  salida = 1 - salida; // si esto pasa acutalizado y guardamos el nuevo estado en la variable salida 
  delay (60) ; //retardo efecto muelle de boton
}
estadoan = estadoac; //actualizamos los estados de las varialbles en la varaibleac ya que la accion se realizo

if(salida == 1) {
digitalWrite(4,HIGH);
}
else {
  digitalWrite(4,LOW);
}

}
