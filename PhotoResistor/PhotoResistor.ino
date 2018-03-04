/************************************************************************************
 * Title: 'Basic Knowledge of Hardware for Artificial Intelligence'
 * Part: Arduino and 5mm PhotoResistor
 * Created By Sayeed Bin Mozahid
 * Daffodil International University 
 * Updated Date: 16-02-2018
*************************************************************************************/

int ledPin = 3;
int sensorPin= A0;

//************************************** SETUP **********************************************//
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(sensorPin,INPUT);
}
//************************************** <SETUP> **********************************************//



//************************************** LOOP **********************************************//
void loop() {
  int sensorValue = analogRead(sensorPin);
  if (sensorValue <= 300){
    digitalWrite(ledPin,HIGH);
    Serial.println("LED is ON");
    Serial.println(sensorValue);
  }else{
    digitalWrite(ledPin,LOW);
    Serial.println("LED is OFF");
    Serial.println(sensorValue);
  }
}
//************************************** <LOOP> **********************************************//
