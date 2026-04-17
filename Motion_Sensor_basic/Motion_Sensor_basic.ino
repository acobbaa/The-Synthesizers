int speakerPin = 5; //digital pin 5
int motionPin = 4; //analog pin 0
int motionStateCurrent = LOW; //current state of motion sensors pin
int motionStatePrevious = LOW; //previous state of motion sensors pin

void setup() {
Serial.begin(9600); //intialise serial
pinMode(speakerPin, OUTPUT);  //set speaker as output
pinMode(motionPin, INPUT); //set motion sensor as input
}

void loop() {
  motionStatePrevious = motionStaeCurrent; //store old state
  motionStateCurrent = digitalRead(motionPin); //read new state

  if motionStatePrevious == LOW && motionStateCurrent == HIGH { //
  Serial.println ("Motion Detected:");
  digitalWrite(speakerPin, HIGH); }
  else
  if (motionStatePrevious == HIGH && motionStateCurrent == LOW) {
    Serial.println("Motion Stopped: ");
    digitalWrite(speakerPin, LOW); 
  }
}
