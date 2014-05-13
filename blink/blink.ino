int red = 3;
int green = 5;
int blue = 6;
int period = 100;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  int r_on = random(2) == 0 ? HIGH : LOW;
  int g_on = random(2) == 0 ? HIGH : LOW;
  int b_on = random(2) == 0 ? HIGH : LOW;
  digitalWrite(red, r_on);
  digitalWrite(green, g_on);
  digitalWrite(blue, b_on);
  delay(period);
}
