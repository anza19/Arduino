int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPIN = 13;

void setup() {
  pinMode(ledPIN, OUTPUT);
  digitalWrite(ledPIN, HIGH);
  while (millis() < 5000) {
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }
  digitalWrite(ledPIN, LOW);
}
void loop() {
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 5000);
  tone(8, pitch, 50);
  delay(50);
}

