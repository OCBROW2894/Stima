// DARKNESS ACTIVATED LED

int lightPin = A0;      // Pin connected to the photoresistor
int ledPin = 13;        // Pin connected to the LED
int lightIntensity = 920;    // Threshold value to determine the amount of light

void setup() {
  Serial.begin(9600);    // Start serial communication
  pinMode(ledPin, OUTPUT);    // Setting LED as an output
}

void loop() {
  int darknessLevel = analogRead(lightPin);    // Read the value of the photoresistor
  Serial.println(darknessLevel);    // Write the value to the serial monitor

  // Check if the darkness level is above the threshold
  if (darknessLevel > lightIntensity) {
    digitalWrite(ledPin, HIGH);     // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);    // Turn off the LED
  }
  delay(10);
}
