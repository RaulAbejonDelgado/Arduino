
const int led = 3; // activamos la sslida pwm nº3 de arduino
                   //  que donde tenemos conectado el led  y lo llamo led
int brillo;         // declaro variable brillo sera el contenedor de la cantidad de intensidad 
int estadoac = 0; //declaro la variable estadoac a 0 al inicio del programa o reset, 
int estadoan = 0; //declaro estadoan a 0 ya que no puede tener otro valor al inicio
int salida = 0; //declaro la variable salida , guardara el valer del estado en funcion si se pulso o no el botn

void setup() {   //se declaran lo que siempre va a ser mientras se ejecuta el programa
pinMode(8,INPUT); //indico que el pin numero 8 es de entrada ya que lo tengo en serie con el boton con un cable
pinMode(led,OUTPUT); //indico que el pin numero 3pwm(analogico) es de salida y con un cable lo conecto al anado del un led 

}

void loop() {
estadoac = digitalRead(8);  // le digo que me guarde el valor de lectura de la entrada pin8 en este caso el valor de pulsacion del boton y me lo guarde en estadoac
  if ((estadoac == HIGH) && (estadoan == LOW)) {  //le pregunto que si estadoac es HIGH,1, se ha pulsado y el estadoac esta a 0 es como un enclavamiento de retardo de scan
  salida = 1 - salida; // si esto pasa acutalizado y guardamos el nuevo estado en la variable salida 
  delay (60) ; //retardo efecto muelle de boton
}
estadoan = estadoac; //actualizamos los estados de las varialbles en la varaibleac ya que la accion se realizo
if(salida == 1) {    //si el boton se pulso
   for(brillo = 0; brillo < 256;brillo++){ // se repite si brillo es menor 256 aumentando la intensidad
    analogWrite(led,brillo); // esto nos envia al led(pin3) el valor de brillo(de 0 a 256)
    delay(10); //metemos un delay de 10 milisengundos entre incremento o decremento de intensidad
  }
}
  else {     // si salida no es 1 , no se pulso el boton
     for(brillo = 255;brillo >= 0;brillo--){ //le digo que el brillo del led sea el maximo y de ahi que vaya hasta apagarse
    analogWrite(led,brillo); // le digo que mande esa informacion por la variable led que esta conectado al pin 3 pwm analogica
    delay(10);// retardo en el decremento de luminosidad
  }
  }
}

