#include <Servo.h>

// Define servo objects for 12 servos
Servo servo1, servo2, servo3, servo4, servo5, servo6;
Servo servo7, servo8, servo9, servo10, servo11, servo12;

// Pin assignments for servos
const int pins[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

void setup() {
  // Attach servos to pins
  servo1.attach(pins[0]);
  servo2.attach(pins[1]);
  servo3.attach(pins[2]);
  servo4.attach(pins[3]);
  servo5.attach(pins[4]);
  servo6.attach(pins[5]);
  servo7.attach(pins[6]);
  servo8.attach(pins[7]);
  servo9.attach(pins[8]);
  servo10.attach(pins[9]);
  servo11.attach(pins[10]);
  servo12.attach(pins[11]);

  // Initialize servos to default position
  for (int i = 0; i < 12; i++) {
    setServoPosition(i, 90);
  }
}

void loop() {
  // Simple walking gait
  walkForward();
  delay(1000);
}

void setServoPosition(int index, int angle) {
  switch (index) {
    case 0: servo1.write(angle); break;
    case 1: servo2.write(angle); break;
    case 2: servo3.write(angle); break;
    case 3: servo4.write(angle); break;
    case 4: servo5.write(angle); break;
    case 5: servo6.write(angle); break;
    case 6: servo7.write(angle); break;
    case 7: servo8.write(angle); break;
    case 8: servo9.write(angle); break;
    case 9: servo10.write(angle); break;
    case 10: servo11.write(angle); break;
    case 11: servo12.write(angle); break;
  }
}

void walkForward() {
  // Lift front legs
  setServoPosition(0, 45);
  setServoPosition(1, 135);
  delay(200);

  // Move front legs forward
  setServoPosition(0, 90);
  setServoPosition(1, 90);
  delay(200);

  // Repeat for other legs
  for (int i = 2; i < 12; i += 2) {
    setServoPosition(i, 45);
    setServoPosition(i + 1, 135);
    delay(200);
    setServoPosition(i, 90);
    setServoPosition(i + 1, 90);
    delay(200);
  }
}
