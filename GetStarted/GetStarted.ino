#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(8, 9);
DFRobotDFPlayerMini dfplayer;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  if (!dfplayer.begin(mySerial)) {
    Serial.println("DFPlayer not found");
    while(true);
  }

  dfplayer.volume(10);  // 0–30

  delay(1000);

  // 🔥 Hardcoded play
  dfplayer.playMp3Folder(1);
}

void loop() {
}