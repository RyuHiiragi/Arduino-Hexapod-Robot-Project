# Arduino-Hexapod-Robot-Project
![Project Banner](https://i.pinimg.com/736x/86/cb/02/86cb0226d7a5c9ce1f9f64fcdc34d84b.jpg)

This repository contains the Arduino code, configuration, and assembly instructions for building a hexapod robot. A hexapod robot is a six-legged walking robot designed to mimic insect-like movement. This project is ideal for beginners and hobbyists who want to explore robotics, Arduino programming, and mechanical design.
---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [Hexapod Chassis Dimensions](#hexapod-chassis-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [How to Simulate on Wokwi](#how-to-simulate-on-wokwi)
7. [Contributing](#contributing)
8. [License](#license)

---

## Overview
The hexapod robot uses 12 servos to control its six legs, with each leg having two degrees of freedom: one for horizontal movement (coxa joint) and one for vertical movement (femur joint). The Arduino Uno serves as the brain of the robot, controlling the servos to create walking motions. This project can be simulated online using the Wokwi platform or built physically using the provided instructions.

---

## Components Used
To build this hexapod robot, you will need the following components:

- **Microcontroller**: Arduino Uno (or any compatible board like Arduino Nano or Mega).
- **Servo Motors**: 12 x Micro Servo Motors (SG90).
- **Power Supply**: External Power Supply (5V/2A recommended).
- **Chassis**: Custom 3D-printed or laser-cut chassis, or a pre-made hexapod chassis kit.
- **Jumper Wires**: Male-to-Male jumper wires for connecting servos to the Arduino.
- **Breadboard (Optional)**: Useful for organizing connections during prototyping.

---

## Hexapod Chassis Dimensions
For an ideal hexapod robot:
- **Length**: 15–20 cm
- **Width**: 10–15 cm
- **Height**: 5–8 cm (excluding legs)

These dimensions provide a stable base while allowing enough space for mounting servos and the Arduino board.

---

## Assembly Instructions
Follow these steps to assemble your hexapod robot:

1. **Prepare the Chassis**:
   - If using a custom design, 3D print or laser-cut the parts.
   - Attach mounting points for the servos on each leg segment.

2. **Attach Servos**:
   - Mount two servos per leg: one for horizontal movement (coxa joint) and one for vertical movement (femur joint).
   - Secure the servos to the chassis using screws or adhesive.

3. **Connect Servos to Arduino**:
   - Connect the signal wires of the servos to the digital pins on the Arduino.
   - Connect the power and ground wires of all servos to an external power supply.

4. **Mount Arduino**:
   - Place the Arduino board on top of the chassis using double-sided tape or screws.

5. **Power Connections**:
   - Ensure the external power supply is connected to both the servos and the Arduino's VIN pin.

---

## Arduino Code Explanation
The provided Arduino code controls the movement of the hexapod robot. Here's a breakdown of its functionality:

- **Servo Initialization**:
  - The code initializes 12 servos and assigns them to specific digital pins on the Arduino.
  - All servos are set to a default position of 90 degrees during setup.

- **Walking Gait**:
  - The `walkForward()` function implements a simple walking gait by alternating the movement of the legs.
  - Each leg is lifted, moved forward, and then returned to its original position in sequence.

- **Servo Position Control**:
  - The `setServoPosition()` function allows precise control of each servo's angle, enabling smooth and coordinated movements.

---

## How to Simulate on Wokwi
1. Go to [Wokwi](https://wokwi.com/).
2. Create a new project and select "Arduino Uno" as the board.
3. Add 12 servo motors to the project by dragging them from the component library.
4. Copy and paste the provided Arduino code into the editor.
5. Connect the servos to the appropriate pins as defined in the code.
6. Run the simulation to see the hexapod robot in action.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to simulate and build your own hexapod robot using Arduino and Wokwi. Happy tinkering! 🚀
