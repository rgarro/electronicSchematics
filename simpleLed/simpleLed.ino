/*
 carLights

   ---------------------------.
 `/""""/""""/|""|'|""||""|   ' \.
 /    /    / |__| |__||__|      |
/----------=====================|
| \  /V\  /    _.               |
|()\ \W/ /()   _            _   |
|   \   /     / \          / \  |-( )
=C========C==_| ) |--------| ) _/==] _-{_}_)
 \_\_/__..  \_\_/_ \_\_/ \_\_/__.__.

 Car Lights Prototype Simulator
 Final Project for Automotive Electricity Class
 
 Created 5 December 2025
 by Rolando Garro <rgarro@gmail.com>
 https://emptyart.github.io/
 */
#define LED 13 // the pin the LED is connected to
int pinFreno	=	4;	// el pin 4 conectado al pulsador
int pinRetro	=	2;// el pin 2 conectado al pulsador
int pinDirecIzq	=	7;// el pin 7 conectado al pulsador
int pinDirecDer	=	1;// el pin 1 conectado al pulsador
int pinLEDrojo	=	9; 	// el pin 9 conectado al LED
int pinLEDblanco	=	6; // el pin 6 conectado al LED
int pinLEDambarIzq	=	3; // el pin 3 conectado al LED
int pinLEDambarDer	=	5; // el pin 5 conectado al LED
int valor_freno=0; 			//valor inicial del pulsador de freno
int valor_retro=0; 			//valor inicial del pulsador de retroceso
int valor_derecha=0; 		//valor inicial del pulsador direccional derecha
int valor_izquierda=0; 		//valor inicial del pulsador direccional izquierda

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("luz camara ...");
  // put your main code here, to run repeatedly:
    digitalWrite(LED, HIGH); // Turn the LED on
    delay(1000); // Wait for  1000 milliseconds (1 second)
    digitalWrite(LED, LOW); // Turn the LED off
    delay(1000); // Wait for 1000 milliseconds (1 second)
}
