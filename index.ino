void setup() {
  // put your setup code here, to run once:
  pinMode(A5, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr = analogRead(A5);

  Serial.println(ldr);

  if (ldr > 500) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
  } 
  else {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
  }  
  delay(100);
}
