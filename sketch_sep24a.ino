int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int buttonPin = 8;     // the number of the pushbutton pin
int buttonState = 0;   // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    analogWrite(led, brightness);
    brightness = brightness + fadeAmount;
  } 
  else {
    // turn LED off:
    digitalWrite(led, LOW);
  }
  delay(30);
}
