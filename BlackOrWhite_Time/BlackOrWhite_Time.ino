void setup() {
  Serial.begin(9600);
  pinMode(D1,OUTPUT);
}

void loop() {
  int y=analogRead(A0);
  Serial.println(y);
  if(y>100){
    digitalWrite(D1,HIGH);
    Serial.println("Black Surface");
  }
  else{
    digitalWrite(D1,LOW);
    Serial.println("White Surface");
  }
  delay(1000);
}
//Black surface absorbs the light
//hence value will be infinity(max=1024)
//white surface wont absorb hence
//value around 0~50
