//Jake Higgins
//Sean Matheis

void setup() {
  pinMode(8, OUTPUT);    // sets the digital pin 13 as output
  pinMode(5, INPUT);
}

void loop() {

  if(digitalRead(5) == HIGH)
    digitalWrite(8, HIGH); // sets the digital pin 13 on
    delay(1000);            // waits for a second
    digitalWrite(8, LOW);  // sets the digital pin 13 off
    delay(1000);            // waits for a second
}
