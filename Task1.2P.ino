const int sensorPin = 2;
const int LEDPin = 13;
volatile bool LEDState = false;

void setup()
{
  Serial.begin(9600);
  pinMode (sensorPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(sensorPin), blink, CHANGE);
}

void blink()
{
  LEDState = true;
}

void loop()
{
  if (LEDState)
  {
    digitalWrite(LEDPin, HIGH);
    Serial.println("Motion Detected!");
    LEDState = false;
  }
  else
  {
    digitalWrite(LEDPin, LOW);
    Serial.println("No Motion Detected!");
  }
  delay(1000);
}