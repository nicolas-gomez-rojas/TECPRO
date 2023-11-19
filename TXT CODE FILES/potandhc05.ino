int potentiometer = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometer, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float potValue = analogRead(potentiometer);
  float value = potValue / 205;
  Serial.print(value);
  delay(400);
}
