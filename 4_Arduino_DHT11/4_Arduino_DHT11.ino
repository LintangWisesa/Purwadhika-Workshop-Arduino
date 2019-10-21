#include "DHT.h" 
#define DHTPIN 6
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup(){
Serial.begin(9600);
}

void loop(){
int kelembaban = dht.readHumidity();
int suhuCelcius = dht.readTemperature();
int suhuFahrenheit = dht.readTemperature(true);

Serial.print("Kelembaban: ");
Serial.print(kelembaban);
Serial.print(" %\t");
Serial.print("Suhu: ");
Serial.print(suhuCelcius);
Serial.print(" *C ");
Serial.print(suhuFahrenheit);
Serial.println(" *F\t");
delay(1000);
}