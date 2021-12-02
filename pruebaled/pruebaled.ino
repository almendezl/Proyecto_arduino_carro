void setup() {
  // put your setup code here, to run once:
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
digitalWrite(7, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  
  delay(5000);
}
