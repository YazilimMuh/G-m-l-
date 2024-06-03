#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <DHT.h>
#include "MQ135.h"
// WiFi credentials
const char *ssid = "Seyma";
const char *pass = "urfa2763";

// Firebase credentials
#define FIREBASE_HOST "ardunio-4c0db-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "bLA1LXWIzkBidDrRVpUiBI19mtP56kpHSEUEkGdD"

// DHT sensor setup
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
// MQ135 sensor setup
const int ANALOGPIN = A0;
MQ135 gasSensor = MQ135(ANALOGPIN);

void setup() {
  Serial.begin(115200);
  delay(10);
  
  // Initialize DHT sensor
  dht.begin();

  // Connect to WiFi
  Serial.println("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  
  // Connect to Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  float karbonmonoksit = gasSensor.getRZero();
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float value = analogRead(ANALOGPIN);
  float gas = (value / 1024.0) * 100;

  // Check if any reads failed
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print values to Serial
  Serial.print("Sıcaklık: "); Serial.println(t);
  Serial.print("Nem: "); Serial.println(h);
  Serial.print("Karbonmonoksit: "); Serial.println(karbonmonoksit);
  Serial.print("Gaz: "); Serial.println(gas);

  // Prepare data to send to Firebase
  String fireHumid = String(h) + "%";
  String fireTemp = String(t) + "°C";
  String fireGas = String(gas) + " ppm";
  String fireKarbonmonoksit = String(karbonmonoksit) + " ppm";

  Firebase.pushString("/sensorData/temperature", fireTemp);
  Firebase.pushString("/sensorData/humidity", fireHumid);
  Firebase.pushString("/sensorData/karbonmonoksit", fireKarbonmonoksit);
  
  Firebase.pushString("/sensorData/gas", fireGas);

  if (Firebase.failed()) {
    Serial.print("Firebaseye gönderildi:");
    Serial.println(Firebase.error());
    return;
  }

  delay(10000);  // Wait 10 seconds before next loop
}
Initial commit with main.ino
