/************************************************************************************
 * Title: 'Basic Knowledge of Hardware for Artificial Intelligence'
 * Part: False Towel (using Ardiuno UNO, Relay, LED. PhotoResistor, Temperature and Humidity sensor
 * Created By Sayeed Bin Mozahid
 * Daffodil International University 
 * Updated Date: 16-02-2018
*************************************************************************************/


#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN 5
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int redPin = 3;
int greenPin = 8;
int sensorPin= A0;
int relayOutput = 7;
int action;
float hum;
float temp;


//************************************** SETUP **********************************************//
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(sensorPin,INPUT);
  pinMode(relayOutput,OUTPUT);
  digitalWrite(relayOutput,HIGH);
  Serial.begin(9600);
  dht.begin();
}
//************************************** <SETUP> **********************************************//



//************************************** LOOP **********************************************//
void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(sensorPin);
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  action = falseTowelFunction(sensorValue, hum, temp);
  if (action == 1){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(relayOutput,LOW);
    Serial.println("Humidity:");
    Serial.print(humidity);
    Serial.println("Light is ON");
  }else if(action==2){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(relayOutput,HIGH);
    Serial.println("Humidity:");
    Serial.print(humidity);
    Serial.println("Humidity less than 65.00"); 
  }else{
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(relayOutput,HIGH);
    Serial.println("Humidity:");
    Serial.print(humidity);
    Serial.println("Light is OFF");
  }

}
//************************************** <LOOP> **********************************************//


//************************************** falseTowelFunction **********************************************//
// Agent Function 
int falseTowelFunction(int ldrValue, float humidity, float temperature){
  if((ldrValue <= 300) and (humidity>65.00)){
    return 1;  // '1' means PhotoResister dark value is under 300 and human's hand humidity upper 65.00. So,dry machine and red light will be ON.
  }else if((ldrValue <= 300) and (humidity<65.00)){
    return 2;  // '2' means PhotoResister dark value is under 300 and human's hand humidity under 65.00. So,dry machine will OFF but green light will be ON.
  }else{
    return 0;  // '0' means PhotoResister dark value is upper 300 and human's hand humidity under 65.00. So,dry machine and light are OFF.
  }
}
//Note: We have assumed that 65 value is ideal humidity value for the human hand.
//************************************** <falseTowelFunction> **********************************************//

