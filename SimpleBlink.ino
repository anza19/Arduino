//setting the value of led pin
int blueLED = 6;
void setup() {
  // put your setup code here, to run once:
  //pinMode assigns whether our pin is OUTPUT or INPUT
  //LEDS == OUTPUT
  pinMode(blueLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //simple ON/OFF logic
  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  delay(1000);

}
