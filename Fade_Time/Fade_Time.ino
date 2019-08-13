int i=0; 
void setup() {
  pinMode(D0,OUTPUT);
}

void loop() {
  for(i=0;i<250;i=i+10){
      analogWrite(D0,i);
      delay(1000);
    }
}
