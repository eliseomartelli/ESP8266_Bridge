#include <SoftwareSerial.h>

SoftwareSerial esp8266(2,3);

void setup() {
  Serial.begin(9600);
  esp8266.begin(9600);
}
 
void loop() {
  if (esp8266.available()) Serial.println(esp8266.readString());
  if (Serial.available()) esp8266.println(Serial.readString());
}
