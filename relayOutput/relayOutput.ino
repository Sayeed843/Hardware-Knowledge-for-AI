/************************************************
 * Title: 'Basic Knowledge of Hardware for Artificial Intelligence'
 * Part: Control Relay  
 * Created By Sayeed Bin Mozahid
 * Daffodil International University 
 * Updated Date: 16-02-2018
*/

char name;
void setup() {
  pinMode(7,OUTPUT);    
  digitalWrite(7,HIGH);
  Serial.begin(9600);

}
void loop() {
  controlElectricalDevice();
  }

void controlElectricalDevice(){
      name = Serial.read();
  if(name == '5')
  {
    Serial.println("ON");
    digitalWrite(7,LOW);
  }
  else if(name == '6'){
    digitalWrite(7,HIGH);
    Serial.println("OFF");
  }
  else{
    Serial.println("other");
    
  }
  delay(200);
  }



