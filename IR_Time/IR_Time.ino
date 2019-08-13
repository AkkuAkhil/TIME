void setup() {
  Serial.begin(9600);
  pinMode(D0,INPUT);
  pinMode(D1,OUTPUT);
}

void loop() {
  int y=digitalRead(D0);
  Serial.println(y);
  if(y==0){
    digitalWrite(D1,HIGH);
  }
  else{
    digitalWrite(D1,LOW);
  }
  delay(1000);
}
