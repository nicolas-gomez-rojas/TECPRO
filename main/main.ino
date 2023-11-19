int white_led = 7;
int green_led = 6;
int red_led = 5;
int potentiometer = A0;


void setup() {
  // put your setup code here, to run once:
  pinMode(white_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potentiometer);
  if (potValue < 450){
    digitalWrite(white_led, HIGH);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, LOW);
    Serial.print("d");
  }
  if (potValue >= 450 && potValue < 900){
    digitalWrite(white_led, LOW);
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
    Serial.print("i");
  }
  if (potValue > 900){
    digitalWrite(white_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, HIGH);
    Serial.print("h");
  }
  delay(400);
}
