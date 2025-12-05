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
  //pinMode(LED, OUTPUT);
  //Serial.begin(9600);
  pinMode(pinLEDrojo, OUTPUT);			
  pinMode(pinLEDblanco, OUTPUT);
  pinMode(pinLEDambarIzq, OUTPUT);
  pinMode(pinLEDambarDer, OUTPUT);
  pinMode(pinFreno, INPUT);		
  pinMode(pinRetro, INPUT);
  pinMode(pinDirecIzq, INPUT);
  pinMode(pinDirecDer, INPUT);
}

void loop() {
  valor_freno=digitalRead(pinFreno);

  if (valor_freno == HIGH){
  // se prende el LED:  
  digitalWrite(pinLEDrojo, HIGH);
  
  }else	{
  //si el pulsador no está presionado, se apaga el led
  digitalWrite(pinLEDrojo, LOW);
  }
  valor_retro=digitalRead(pinRetro);
  if (valor_retro == HIGH){
  // se prende el LED:  
  digitalWrite(pinLEDblanco, HIGH);
  delay(1000);
  digitalWrite(pinLEDblanco, LOW);
  delay(1000);  
  
  }else	{
  //si el pulsador no está presionado, se apaga el led
  digitalWrite(pinLEDblanco, LOW);
  }
  valor_izquierda=digitalRead(pinDirecIzq);
  
  if (valor_izquierda == HIGH){
  // se prende el LED:  
  digitalWrite(pinLEDambarIzq, HIGH);
  delay(500);
  digitalWrite(pinLEDambarIzq, LOW);
  delay(500);
     
  }else	{
  //si el pulsador no está presionado, se apaga el led
  digitalWrite(pinLEDambarIzq, LOW);
        
  }
   valor_derecha=digitalRead(pinDirecDer);
  if (valor_derecha == HIGH){
  // se prende el LED:  
  digitalWrite(pinLEDambarDer, HIGH);
  delay(500);
  digitalWrite(pinLEDambarDer, LOW);
  delay(500);
  
  }else	{
  //si el pulsador no está presionado, se apaga el led
  digitalWrite(pinLEDambarDer, LOW);
  }
}

