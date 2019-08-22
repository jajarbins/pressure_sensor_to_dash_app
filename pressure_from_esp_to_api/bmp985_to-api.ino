

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
   
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);


void setup() {
  Serial.begin(115200);
  //WiFi.begin(ssid, password);
 
  //while (WiFi.status() != WL_CONNECTED) {
  //  delay(1000);
  //  Serial.println("Connecting...");
  //}
  Serial.println("Pressure Sensor Test"); Serial.println("");
  
  /* Initialise the sensor */
  if(!bmp.begin())
  {
    /* There was a problem detecting the BMP085 ... check your connections */
    Serial.print("Ooops, no BMP085 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }
}

void loop() {
  sensors_event_t event;
  bmp.getEvent(&event);
 
  /* Display the results (barometric pressure is measure in hPa) */
  if (event.pressure)
  {
    /* Display atmospheric pressure in hPa */
    Serial.print("Pressure: "); Serial.print(event.pressure); Serial.println(" hPa");
  }
  else
  {
    Serial.println("Sensor error");
  }
  delay(250);

}


//#include <Wire.h>
// #include <Adafruit_BMP085.h>


// Adafruit_BMP085 bmp;    


// void setup(){
  //Serial.begin(9600);
  
 // Wire.begin();  // 4, 5


  //while (WiFi.status() != WL_CONNECTED) {
 
   // delay(1000);
  //  Serial.println("Connecting..");
  //  Serial.println(WiFi.status());
 
  //}
  
//}


//void loop(){
    
  // Serial.print("Temperature = ");
  // Serial.print(bmp.readTemperature());
  // Serial.print(" *C");
  
  // Serial.print(" | Pression = ");
  // Serial.print(bmp.readPressure());
  // Serial.print(" Pa");

  // Serial.print(" | Altitude = ");
  // Serial.print(bmp.readAltitude());
  // Serial.println(" metres");
  
  // delay(5000);
//}

//#include <ESP8266WiFi.h>
//#include <ESP8266HTTPClient.h>
//#include <Adafruit_BMP085.h>
//#include <stdio.h>


//#include <DNSServer.h>
//#include <ESP8266WebServer.h>
//#include <ESP8266WiFiMulti.h>

//#include <Wire.h>
//#include <SFE_MicroOLED.h>
//#include <Adafruit_BMP085.h>

//#include "Adafruit_MQTT.h"
//#include "Adafruit_MQTT_Client.h"


//#include <time.h>


// WiFi Parameters
//const char* ssid = "Livebox-DEF3";
//const char* password = "blendecques";

//Adafruit_BMP085 bmp;
  
//void loop(){}
    // Check WiFi Status

  //float pressure = bmp.readPressure();

  

  // Serial.println(get_time());
  // Serial.println(pressure);
  
  //if (WiFi.status() == WL_CONNECTED) {
  //  HTTPClient http;  //Object of class HTTPClient
  //  http.begin("http://jsonplaceholder.typicode.com/users/1");
  //  int httpCode = http.POST("timestamp=%s&pressure=%s", timestamp, pressure);
    //Check the returning code                                                                  
  //  if (httpCode > 0) {
  //    Serial.print(httpCode);
  //  }
  //  http.end();   //Close connection
  //}
  // Delay
  //delay(5000);



  
