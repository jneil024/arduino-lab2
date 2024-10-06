int neil_ard = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  neil_ard = 400;
  
  delay(neil_ard); 
  digitalWrite(13, HIGH);
  delay(neil_ard); 
  digitalWrite(13, LOW);
  
  delay(neil_ard);
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard);
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard); 
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard);
  digitalWrite(11, HIGH);
  delay(neil_ard); 
  digitalWrite(11, LOW);
  
  delay(neil_ard);
  digitalWrite(11, HIGH);
  delay(neil_ard); 
  digitalWrite(11, LOW);
  
  delay(neil_ard);
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard);
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard); 
  digitalWrite(12, HIGH);
  delay(neil_ard); 
  digitalWrite(12, LOW);
  
  delay(neil_ard); 
  digitalWrite(13, HIGH);
  delay(neil_ard); 
  digitalWrite(13, LOW);
}