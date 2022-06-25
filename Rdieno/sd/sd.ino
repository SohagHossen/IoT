#include<SPI.h>
#include <SD.h>
const int trigpin = 9;
const int echopin = 8;
const int led = 7;



void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, OUTPUT);
  pinMode(led, OUTPUT);
  if (!SD.begin(10)) {
    Serial.println("initialination failed!");
    while (1);
  }
  Serial.println("initialization Done.");
  delay(2000);


}
File myFile;
uint16_t line ;

void loop() {
  long duration, distance;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn (echopin, HIGH);
  distance = (duration / 2) * 0.034;
  myFile = SD.open("test.txt", FILE_WRITE);
  if (myFile) {
    Serial.print(line);
    Serial.print(":Distance =");
    Serial.println(distance);
    myFile.close();
    delay(500);
  }
  else {
    Serial.println("no");
  }
  if (distance < 10) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }

}
