/************************************************************************************
 * Title: 'Basic Knowledge of Hardware for Artificial Intelligence'
 * Part: Arduino and DHT22
 * Created By Sayeed Bin Mozahid
 * Daffodil International University 
 * Updated Date: 06-02-2018
*************************************************************************************/

#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN 5
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int chk;
float hum;
float temp;

//************************************** SETUP **********************************************//
void setup() {
  Serial.begin(9600);
  dht.begin();

}
//************************************** <SETUP> **********************************************//



//************************************** LOOP **********************************************//
void loop() {
  // put your main code here, to run repeatedly:
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" %");
  Serial.println();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println(" Celsius");
  delay(2000);
  Serial.println();
  Serial.println();
}
//************************************** <LOOP> **********************************************//
