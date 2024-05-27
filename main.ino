#include <DHT.h>
#include <ESP8266WiFi.h>
#include "MQ135.h"
const int ANALOGPIN=0;
MQ135 gasSensor=MQ135(ANALOGPIN);
const char *ssid = "Seyma";
const char *pass = "urfa2763";
const int inPin = A0;

#define DHTPIN 4

DHT dht(DHTPIN, DHT11);
WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);
  dht.begin();

  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi bağlandı");
}

void loop() {
  float karbonmonoksit=gasSensor.getRZero();
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float value = analogRead(inPin);
  float gas = (value / 1024.0) * 100;
    Serial.printf("Karbondioksit değeri:  ");
Serial.println(gas);
  delay(1000);

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

    Serial.print("Sicaklik: ");
    Serial.print(t);
    Serial.print("Celcius , Nem: ");
    Serial.print(h);
    Serial.println("%");

    Serial.print("karbonmonoksit değeri:  ");
    Serial.println(karbonmonoksit);
    delay(1000);
  
  client.stop();

  Serial.println("Bekleniyor...");
}

Initial commit with main.ino
