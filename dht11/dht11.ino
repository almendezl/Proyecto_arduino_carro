//Librerias
#include "DHT.h"

//Pin del DHT11
#define DHTPIN 2
//Dependiendo del tipo de sensor
#define DHTTYPE DHT11
//Inicializar el sensor DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  //inicializar la comunicacion en serie
  Serial.begin(9600);
  //inicializar el sensor
  dht.begin();
}

void loop() {
  // Esperar 5 segundos entre medidas
  delay(5000);

  //Leer la humedad relativa
  float hum = dht.readHumidity();
  //Leer la temperatura en grados centigrados
  float tem = dht.readTemperature();
  //Leer la temperatura en grados F
  float far = dht.readTemperature(True);

  //Comprobar error durante la lectura
  if(isnan(hum) || isnan(tem) || isnan(far)){
    Serial.println("Error obteniendo los datos del sensor");
    return;
  }

  //calcular el indice de calor en F
  float hif = dht.computeHeatIndex(far, hum);
  //calcular el indice de calor en centigrados
  float hic = dht.computeHeatIndex(tem, hum, false);

  //mostrar los datos en consola
  Serial.print("Humedad: ");
  Serial.print(hum);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(tem);
  Serial.print(" C ");
  Serial.print(f);
  Serial.print(" F/t ");
  Serial.print("Indice de calor: ");
  Serial.print(hic);
  Serial.print(" C ");
  Serial.print(hif);
  Serial.print(" F ");

}
