void setup() {
  Serial.begin(9600);
  pinMode(D0,OUTPUT);
}

void loop() {
  int x=analogRead(A0);
  x=map(x,0,1023,0,10);
  Serial.println(x);
  if(x<2){
    digitalWrite(D0,HIGH);
  }
  else{
    digitalWrite(D0,LOW);
  }
  delay(1000);
}
