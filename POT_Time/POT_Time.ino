void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(D3,OUTPUT);
}

void loop() {
  int y=analogRead(A0);
  Serial.println(y);
  if(y>500){
    digitalWrite(D3,HIGH);
  }
  else{
    digitalWrite(D3,LOW);
  }
  delay(500);
}
