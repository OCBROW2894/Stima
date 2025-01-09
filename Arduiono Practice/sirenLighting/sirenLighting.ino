// SIREN LIGHTS

const int analogPin = A0;    //Pin Connected to the potentiometer
int sensorValue = 0;    //Value read from the potentiometer
int timer = 0;    //Delay

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(analogPin);    //Read potentiometer value
  
  timer = map(sensorValue, 0,1023, 10, 500); //Delay 10 to 500 ms
  digitalWrite(12, HIGH);   //LED turns on
  delay(timer);
  digitalWrite(12, LOW);    //LED turns off
  delay(timer);
  digitalWrite(12, HIGH); 
  delay(timer);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH); 
  delay(timer);
  digitalWrite(11, LOW);  
  delay(timer);
  digitalWrite(11, HIGH); 
  delay(timer);
  digitalWrite(11, LOW);
  delay(timer);
  digitalWrite(11, HIGH);
  delay(timer);
  digitalWrite(11, LOW);
}
