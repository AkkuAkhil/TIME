#include<ESP8266WiFi.h>
#include<String.h>
WiFiServer MyServer(80);
void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  WiFi.mode(WIFI_AP);//to make an active point
  WiFi.softAP("Yourhotspot", "123456789");
  Serial.begin(9600);
  Serial.println( WiFi.softAPIP() );
  MyServer.begin();
}

void loop()
{
  WiFiClient myClient;
  while ((myClient = MyServer.available()) == 0);
  {
    Serial.println("connected");
    Serial.println( myClient.remoteIP() );
  }
  while (myClient.connected() == 1 && myClient.available() == 0)
  {
    delay(1);
  }
  myClient.println();
  String request = myClient.readStringUntil('\r') ;
  delay(1);
  if (request.indexOf("ledon") != -1 )
  {
    digitalWrite(D0, HIGH);
  }
  else if (request.indexOf("ledoff") != -1 )
  {
    digitalWrite(D0, LOW);
  }

  myClient.flush();

}
