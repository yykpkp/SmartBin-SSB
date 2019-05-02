void Line_Notify(String message) ;

#include <ESP8266WiFi.h>
#include <WiFiClientSecureAxTLS.h> // กรณีขึ้น Error ให้เอาบรรทัดนี้ออก

// Config connect WiFi
#define WIFI_SSID "true_home2G_4FN"
#define WIFI_PASSWORD "5dAp962p"

// Line config
#define LINE_TOKEN "hpRxjrbIAPbEUCeq7jy5fhEm71xHYDLLCoSSSZDUlBM"

const int eko=D2;
const int trig=D1;
int distance;
int duration;

String message = "ถังขยะเต็มแล้ว กรุณาเอาไปทิ้งด้วยนะจ๊ะ"; // ArduinoIDE เวอร์ชั่นใหม่ ๆ ใส่ภาษาไทยลงไปได้เลย

void setup() {
  pinMode(trig,OUTPUT);        
  pinMode(eko,INPUT); 

  Serial.begin(9600);

  WiFi.mode(WIFI_STA);
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  digitalWrite(trig, LOW);         
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);       
  delayMicroseconds(20);
  digitalWrite(trig, LOW);         
  duration = pulseIn(eko, HIGH);      
  distance= (duration/29.1)/2;  
  

  if(distance<=5){
    Line_Notify(message);
    // Serial.println();    
    delay(500);
  }
  if(distance>200)
distance=200;
Serial.print("distance");
Serial.println(distance);
delay(500);
}

void Line_Notify(String message) {
  axTLS::WiFiClientSecure client; // กรณีขึ้น Error ให้ลบ axTLS:: ข้างหน้าทิ้ง

  if (!client.connect("notify-api.line.me", 443)) {
    Serial.println("connection failed");
    return;   
  }

  String req = "";
  req += "POST /api/notify HTTP/1.1\r\n";
  req += "Host: notify-api.line.me\r\n";
  req += "Authorization: Bearer " + String(LINE_TOKEN) + "\r\n";
  req += "Cache-Control: no-cache\r\n";
  req += "User-Agent: ESP8266\r\n";
  req += "Connection: close\r\n";
  req += "Content-Type: application/x-www-form-urlencoded\r\n";
  req += "Content-Length: " + String(String("message=" + message).length()) + "\r\n";
  req += "\r\n";
  req += "message=" + message;
  // Serial.println(req);
  client.print(req);
    
  delay(20);

  // Serial.println("-------------");
  while(client.connected()) {
    String line = client.readStringUntil('\n');
    if (line == "\r") {
      break;
    }
    //Serial.println(line);
  }
  // Serial.println("-------------");
}
