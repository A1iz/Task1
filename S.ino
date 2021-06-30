#include <Servo.h>
Servo S;
Servo A;
Servo Z;
Servo X;
Servo C;
void setup() {
  Serial.begin(9600);
S.attach(3);
A.attach(5);
Z.attach(6);
X.attach(9);  
C.attach(10);
}

void loop() {
  
  S.write(90);
  delay(1000);
  S.write(0);
  delay(1000);
  
  Z.write(90);
  delay(1000);
  Z.write(0);
  delay(1000);
  
  X.write(90);
  delay(1000);
  X.write(0);
  delay(1000);

  C.write(90);
  delay(1000);
  C.write(0);
  delay(1000);

  A.write(90);
  delay(1000);
  A.write(0);
  delay(1000);


}
