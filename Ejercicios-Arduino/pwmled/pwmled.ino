const int led = 3; // activamos la sslida pwm nº3 de arduino
                   //  que donde tenemos conectado el led 

 int brillo; // declaro variable brillo sera el contenedor de la informacion de intensidad del led
 

void setup() {
 pinMode(led,OUTPUT); //declaramos constante led como salida

}

void loop() {
  for(brillo = 0; brillo < 256;brillo++){ // se repite si brillo es menor 256 aumentando la intensidad
    analogWrite(led,brillo); // esto nos envia al led(pin3) el valor de brillo(de 0 a 256)
    delay(10); //metemos un delay de 10 milisengundos entre incremento o decremento de intensidad
  }
  for(brillo = 255;brillo >= 0;brillo--){
    analogWrite(led,brillo);
    delay(10);
  }
}
