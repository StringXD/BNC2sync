void setup() {
  // put your setup code here, to run once:
  // BNC OUTPUT
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  // BNC INPUT
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delayMicroseconds(158);
  digitalWrite(2, digitalRead(3));
  delayMicroseconds(153);
  digitalWrite(2, digitalRead(4));
  delayMicroseconds(153);
  digitalWrite(2, digitalRead(5));
  delayMicroseconds(153);
  digitalWrite(2, digitalRead(6));
  delayMicroseconds(153);
  digitalWrite(2, digitalRead(7));
  delayMicroseconds(153);
  digitalWrite(2, digitalRead(8));
  delayMicroseconds(153);
  digitalWrite(2, LOW);
}
