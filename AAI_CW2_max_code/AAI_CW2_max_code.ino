int val[8]; //array 8 sensors total

void setup() {
  Serial.begin(9600); //serial communication set-up
}

void loop() {
// read analog inputs one by one and send them to maxMSP
for(int i = 0; i < 8; i++) {
  val[i] = analogRead(i);
  Serial.print(val[i]);
  Serial.print(" ");
}
Serial.println();
delay(10);
}
