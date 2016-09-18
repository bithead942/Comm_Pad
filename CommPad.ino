/*
  X-Wing Pilot Comm Pad Lights
  by Bithead942

  Arduino Pro Mini (5V, ATMega328, 16MHz)

  Adafruit LED Sequens turn on-off in sequence

*/

int i = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //all on
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(1000);

  //one at at time
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);

  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);

  //two at a time
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(1000);

  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  delay(1000);

  //chasing slow
  for (i=0; i < 10; i++) {
  digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(500);
  }

  //all on
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(1000);

  //one at at time
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);

  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);

  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);

  //two at a time
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(500);

  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(500);

  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  delay(500);

  //chasing fast
  for (i=0; i < 50; i++) {
  digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(100);
  }
  

}
