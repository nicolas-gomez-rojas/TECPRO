int white_led = 7;
int green_led = 6;
int red_led = 5;
int humidity_sensor = A0;
int light_sensor = A1;
int water_bomb = 9;

int light = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(white_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(humidity_sensor, INPUT);
  pinMode(light_sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(humidity_sensor);
  int light_val = analogRead(light_sensor);
  if (sensorValue < 450){
    digitalWrite(water_bomb, HIGH);
    delay(2000);
    digitalWrite(water_bomb, LOW);
    digitalWrite(white_led, HIGH);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, LOW);
    Serial.print("Dry");
  }
  if (sensorValue >= 450 && potValue < 900){
    digitalWrite(white_led, LOW);
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
    digitalWrite(water_bomb, LOW);
    Serial.print("Ideal");
  }
  if (sensorValue > 900){
    digitalWrite(white_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, HIGH);
    digitalWrite(water_bomb, LOW);
    Serial.print("Humid");
  }
  delay(400);
  if (light_val < 100){
    digitalWrite(light, HIGH);
  }
  if (light_val > 100){
    digitalWrite(light, LOW);
  }
}
