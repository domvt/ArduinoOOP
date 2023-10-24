void setup() {
  // put your setup code here, to run once:
pinMode(0, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalRead(0);
int input1 = digitalRead(0);
if(input1 == 0) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
}
digitalWrite(LED_BUILTIN, LOW);
Serial.println(input1);
}
