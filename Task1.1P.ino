const int sensorPin = 2;
const int LEDPin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode (sensorPin, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop()
{
  int value = digitalRead(sensorPin);
  if (value == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
  	Serial.println("Motion Detected!");
  }
  else
  {
    digitalWrite(LEDPin, LOW);
    Serial.println("No Motion Detected!");
  }
  delay(1000); 
}