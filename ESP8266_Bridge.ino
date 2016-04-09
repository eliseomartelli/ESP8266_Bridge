#include <SoftwareSerial.h>

//Baud Rate used for the comunication of the Arduino and the pc
#define ARDUINO_BAUD 9600 
//Baud Rate used for the comunication of the Arduino and the ESP8266
#define ESP8266_BAUD 9600

#define ESP8266_RX 2 //RX pin for the ESP8266

#define ESP8266_TX 3 //TX pin for the ESP8266

SoftwareSerial esp8266(ESP8266_RX, ESP8266_TX);

void setup() {
  Serial.begin(ARDUINO_BAUD);
  esp8266.begin(ESP8266_BAUD);
}
 
void loop() {
  if (esp8266.available()) Serial.println(esp8266.readString());
  if (Serial.available()) esp8266.println(Serial.readString());
}
