#include <Servo.h>

Servo LA;
Servo UA;

void setup() {
  LA.attach(D4);
  UA.attach(D5);

}

void loop() 
{
  LA.write(0);
  UA.write(0);
  delay(2000);
  LA.write(90);
  UA.write(90);
  delay(1000);
  LA.write(180);
  UA.write(180);
  delay(2000);
  LA.write(90);
  UA.write(90);
  delay(1000);
}
