void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
for(int i=0; i<255; i++){
analogWrite(3, 255);
delay(10);
}
for(int i=255; i>0; i--){
  analogWrite(3, i);
  delay(10);
}
}
