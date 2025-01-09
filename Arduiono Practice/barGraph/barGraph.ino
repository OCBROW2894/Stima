//BAR GRAPH

const int analogPin = A0;    //Pin Connected to the potentiometer
const int ledCount = 9;   //Number of LEDs
int ledPins[] = {2,3,4,5,6,7,8,9,10};   //Pins Connected to the LEDs


void setup()
{
  for (int thisLed = 0; thisLed < ledCount; thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);   //set LED pins as output
  }
}

void loop()
{
  int sensorReading = analogRead(analogPin);    //Analog input
  int ledLevel = map(sensorReading,0, 1023, 0, ledCount);
  
  for(int thisLed =0; thisLed < ledCount; thisLed++){
    if(thisLed < ledLevel){
      digitalWrite(ledPins [thisLed], HIGH);    //Turn on LEDs in sequence
    }
    else{
      digitalWrite(ledPins[thisLed], LOW);    //Turn off LEDs in sequence
    }
  }
}
