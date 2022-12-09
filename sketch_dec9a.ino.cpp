#include <Arduino.h>
#line 1 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2022119-5264-dm1cpg.pmp4\\sketch_dec9a\\sketch_dec9a.ino"
int d = 3000;
#line 2 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2022119-5264-dm1cpg.pmp4\\sketch_dec9a\\sketch_dec9a.ino"
void setup();
#line 10 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2022119-5264-dm1cpg.pmp4\\sketch_dec9a\\sketch_dec9a.ino"
void loop();
#line 2 "C:\\Users\\mina1\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2022119-5264-dm1cpg.pmp4\\sketch_dec9a\\sketch_dec9a.ino"
void setup() {
  // put your setup code here, to run once:

 pinMode (2 , OUTPUT);
 pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(d);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(d);

}

