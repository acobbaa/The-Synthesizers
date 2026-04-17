int val[5]; //array 5 sensors total

void setup() {
  Serial.begin(9600); //serial communication set-up
}

void loop() {
// read analog inputs one by one and send them to maxMSP
for(int i = 0; i < 5; i++) {
  val[i] = analogRead(i);
  Serial.print(val[i]);
  Serial.print(" ");
}
Serial.println();
delay(10);
}
