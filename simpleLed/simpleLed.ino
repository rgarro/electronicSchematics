/**
 *Arduino UNO R3   
 *                                   +-----+
 *            +--[PWR]---------------| USB |---+
 *            |                      +-----+   |
 *            | Arduino     GND[ ][ ]RST2 [RST]|
 *            | UNO R3    MOSI2[ ][ ]SCK2  [ ] | 19/A5/SCL
 *            |              5V[ ][ ]MISO2 [ ] | 18/A4/SDA
 *            |                            [ ] | AREF
 *            |        [RX LED] [TX LED]   [ ] | GRD
 *        N/C | [ ]          [LED_BUILTIN] [ ] | 13/SCK/LED
 *      IOREF | [ ]  +---+                 [ ] | 12/MISO
 *        RST | [ ] -| A |-                [ ]~| 11/MOSI
 *        3V3 | [ ] -| T |-                [ ]~| 10/SS
 *         5V | [ ] -| M |-                [ ]~| 9
 *        GND | [ ] -| E |-                [ ] | 8
 *        GND | [ ] -| G |-                    |
 *        Vin | [ ] -| A |-                [ ] | 7
 *            |     -| 3 |-                [ ]~| 6
 *      A0/14 | [ ] -| 2 |-                [ ]~| 5
 *      A1/15 | [ ] -| 8 |-                [ ] | 4
 *      A2/16 | [ ] -| P |-                [ ]~| 3/INT1
 *      A3/17 | [ ]  +---+ RST SCK MISO    [ ] | 2/INT0
 *  SDA/A4/18 | [ ]        [ ] [ ] [ ]     [ ] | 1/TXD>
 *  SCL/A5/19 | [ ]        [ ] [ ] [ ]     [ ] | 0/RXD<
 *            |            GND MOSI 5V ________/
 *            \_______________________/
 *
 *
 *
 *
 *@author Rolando <rgarro@gmail.com> <https://emptyart.github.io/>
 */
#define LED 13 // the pin the LED is connected to

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
