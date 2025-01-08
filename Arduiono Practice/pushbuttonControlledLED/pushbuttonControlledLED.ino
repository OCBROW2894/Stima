//PUSHBUTTON - CONTROLLED LED 
//

const int buttonPin = 2;  //Pin connected to the pushbutton
const int ledPin = 13;    //Pin connected to LED
int buttonState = 0;     //Give pushbutton a value


void setup()
{
  pinMode(ledPin, OUTPUT);    //Set LED pin as output
  pinMode(buttonPin, INPUT);    //Set pushbutton pin as input
}

void loop()
{
  buttonState = digitalRead(buttonPin);   //Read input from pin 2
  if(buttonState == HIGH) {   //If pushbutton is pressed
    digitalWrite(ledPin, HIGH);   //Turn on LED
  }
  else {
    digitalWrite(ledPin, LOW);    //Tutn off LED
  }
}
