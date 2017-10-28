//initializing our LEDs
int redLED = 7;
int yellowLED = 6;
int blueLED = 5;
int greenLED = 4;

//function that assigns our LEDs to their pinMode()
void assignLEDs(int led1, int led2, int led3, int led4);

void setup() {
  assignLEDs(redLED, yellowLED, blueLED, greenLED);
}

void loop() {
  //turn an LED on for a 1 second
  //turn off, turn the next on
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
}

void assignLEDs(int led1, int led2, int led3, int led4) {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}



