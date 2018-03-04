/************************************************************************************
 * Title: 'Basic Knowledge of Hardware for Artificial Intelligence'
 * Part: RGB LED Light
 * Created By Sayeed Bin Mozahid
 * Daffodil International University 
 * Updated Date: 16-02-2018
*************************************************************************************/


int ledRed = 7;
int ledBlue = 6;
int ledGreen = 5;

//************************************** SETUP **********************************************//
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);

}
//************************************** <SETUP> **********************************************//


//************************************** LOOP **********************************************//
void loop() {
  // put your main code here, to run repeatedly:
   rgbDefault();
}
//************************************** <LOOP> **********************************************//


//************************************** rgbDefault **********************************************//
void rgbDefault()
{
  digitalWrite(ledRed,HIGH);
  delay(1000);
  digitalWrite(ledRed,LOW);
  delay(1000);
  
  digitalWrite(ledBlue,HIGH);
  delay(1000);
  digitalWrite(ledBlue,LOW);
  delay(1000);
  
  digitalWrite(ledGreen,HIGH);
  delay(1000);
  digitalWrite(ledGreen,LOW);
  delay(1000);
}

//************************************** <rgbDefault> **********************************************//
