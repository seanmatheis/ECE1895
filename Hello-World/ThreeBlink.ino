Sean Matheis

void setup() {
  pinMode(8, OUTPUT);    // sets the digital pin 8 as output
  pinMode(7, OUTPUT);    // sets the digital pin 8 as output
  pinMode(6, OUTPUT);    // sets the digital pin 8 as output
  pinMode(2, INPUT);
}

void loop() {

  if((digitalRead(2)) == HIGH){
    digitalWrite(8, HIGH); // sets the digital pin 8 on
    delay(1000);            // waits for a second
    digitalWrite(8, LOW);  // sets the digital pin 8 off
    delay(1000);            // waits for a second

    digitalWrite(7, HIGH); // sets the digital pin 7 on
    delay(1000);            // waits for a second
    digitalWrite(7, LOW);  // sets the digital pin 7 off
    delay(1000);            // waits for a second

    digitalWrite(6, HIGH); // sets the digital pin 6 on
    delay(1000);            // waits for a second
    digitalWrite(6, LOW);  // sets the digital pin 6 off
    delay(1000);            // waits for a second
  }
}
