int i=0; 
void setup() {
  pinMode(D0,OUTPUT);
}

void loop() {
  while(1){
      digitalWrite(D0,HIGH);
      delay(i);
      digitalWrite(D0,LOW);
      delay(i);
      i=i+100;
      if(i==2000){
        i=0;
      }
  }
}
