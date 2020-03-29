
#include <ArduinoPHP.h>
#include <HTTPClient.h>

#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
  #include <ESP8266HTTPClient.h>
  #include <WiFiClient.h>
#endif


ArduinoPHP ap("http://bensalcie.000webhostapp.com/arduino/post-esp-data.php");
  
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  HTTPClient http;

  // put your main code here, to run repeatedly:  
  ap.sendDataToPHPMYSQLDatabase("Dht Data","Home","3.45","5.64","9.02",1000,http);
 

}
