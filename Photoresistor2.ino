int LED = A0;
int lightVal;
int delayVal = 250;
int redLED = 9;
int greenLED = 8; 
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  lightVal = analogRead(LED);
  Serial.println(lightVal);
  delay(delayVal);
  if(lightVal > 400) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
  }
  if (lightVal < 400){
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
  }  
}
