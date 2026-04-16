int ldrPin = 0; //analog pin 0
int speakerPin = 2; //digital pin 2

void setup() {
Serial.begin(9600);
pinMode(ldrPin, INPUT); //set LDR as input
pinMode(speakerPin, OUTPUT); //set piezo speaker as output
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrStatus = analogRead(ldrPin);
if (ldrStatus <= 200) {
  digitalWrite(speakerPin, HIGH); //If LDR sense darkness, speaker will play noise
  delay(1);
  digitalWrite(speakerPin, LOW);
  delay(1);
  digitalWrite(speakerPin, HIGH);
Serial.print("Ts dark af : ");
Serial.println(ldrStatus); 
}
else{
  digitalWrite(speakerPin, LOW); // if LDR sense light, speaker will stop playing noise
  Serial.print("it lowkey clit in here: ");
  Serial.println(ldrStatus);
}
}
