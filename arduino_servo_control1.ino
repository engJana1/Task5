#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;

void setup() {
    s1.attach(2);
    s2.attach(3);
    s3.attach(4);
    s4.attach(5);
    s5.attach(6);
    s6.attach(7);
}

void loop() {
    // Move 180 degrees
    s1.write(180);
    s2.write(180);
    s3.write(180);
    s4.write(180);
    s5.write(180);
    s6.write(180);
    // Move 90 degrees
    delay(1500);

    // Move to 0 degrees
    s1.write(0);
    s2.write(0);
    s3.write(0);
    s4.write(0);
    s5.write(0);
    s6.write(0);
    delay(1500);
}