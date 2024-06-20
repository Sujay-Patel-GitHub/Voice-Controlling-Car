# Voice Controlled Car using Arduino Uno
<p align="left"> <img src="https://komarev.com/ghpvc/?username=Sujay-Patel-GitHub&label=Profile%20views&color=0e75b6&style=flat" alt="Sujay-Patel-GitHub" /> </p>
## Overview

This project demonstrates how to create a voice-controlled car using an Arduino Uno, four motors, four wheels, and an HC-05 Bluetooth module. The car can be controlled via voice commands sent from a smartphone.

## Components

- Arduino Uno
- 4 DC motors
- 4 wheels
- Motor driver (L298N or similar)
- HC-05 Bluetooth module
- 12V battery pack
- Jumper wires
- Chassis for mounting components

## Wiring Diagram

Here’s a basic wiring setup:

- **HC-05 Bluetooth Module:**
  - VCC to 5V on Arduino
  - GND to GND on Arduino
  - TXD to RX (Pin 0) on Arduino
  - RXD to TX (Pin 1) on Arduino

- **Motor Driver (L298N):**
  - IN1, IN2 to digital pins on Arduino (e.g., 2, 3 for Motor 1)
  - IN3, IN4 to digital pins on Arduino (e.g., 4, 5 for Motor 2)
  - ENA, ENB to PWM pins on Arduino (e.g., 6, 9)
  - Motor terminals to motors
  - VCC to 12V battery pack
  - GND to GND on Arduino and battery pack
  - 5V output (if available) to 5V on Arduino

## Installation

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/your-username/voice-controlled-car.git
   cd voice-controlled-car

   Sure, here's the README content formatted in Markdown for GitHub:

```markdown
# Voice Controlled Car using Arduino Uno

## Overview

This project demonstrates how to create a voice-controlled car using an Arduino Uno, four motors, four wheels, and an HC-05 Bluetooth module. The car can be controlled via voice commands sent from a smartphone.

## Components

- Arduino Uno
- 4 DC motors
- 4 wheels
- Motor driver (L298N or similar)
- HC-05 Bluetooth module
- 12V battery pack
- Jumper wires
- Chassis for mounting components

## Wiring Diagram

Here’s a basic wiring setup:

- **HC-05 Bluetooth Module:**
  - VCC to 5V on Arduino
  - GND to GND on Arduino
  - TXD to RX (Pin 0) on Arduino
  - RXD to TX (Pin 1) on Arduino

- **Motor Driver (L298N):**
  - IN1, IN2 to digital pins on Arduino (e.g., 2, 3 for Motor 1)
  - IN3, IN4 to digital pins on Arduino (e.g., 4, 5 for Motor 2)
  - ENA, ENB to PWM pins on Arduino (e.g., 6, 9)
  - Motor terminals to motors
  - VCC to 12V battery pack
  - GND to GND on Arduino and battery pack
  - 5V output (if available) to 5V on Arduino

## Installation

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/your-username/voice-controlled-car.git
   cd voice-controlled-car
   ```

2. **Arduino Libraries:**
   Ensure you have the necessary libraries installed in your Arduino IDE:
   - SoftwareSerial (if using software serial for Bluetooth communication)

3. **Upload the Code:**
   Open the `voice_controlled_car.ino` file in the Arduino IDE and upload it to your Arduino Uno.

## Smartphone Setup

You will need a smartphone with a Bluetooth terminal application installed (e.g., Bluetooth Terminal, Arduino Bluetooth Controller). This app will send voice commands to the HC-05 module.

### Example Commands

- **"forward"**: Moves the car forward
- **"backward"**: Moves the car backward
- **"left"**: Turns the car left
- **"right"**: Turns the car right
- **"stop"**: Stops the car

## Usage

1. Power on the Arduino and the HC-05 module.
2. Pair your smartphone with the HC-05 module (default PIN is usually "1234" or "0000").
3. Open the Bluetooth terminal application on your smartphone.
4. Connect to the HC-05 module.
5. Send voice commands (e.g., "forward", "backward", "left", "right", "stop") to control the car.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

You can copy and paste this Markdown into your `README.md` file on GitHub.
```

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://instagram.com/sujay1512" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="sujay1512" height="30" width="40" /></a>
<a href="https://www.youtube.com/c/@careditzjayshreeram" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="@careditzjayshreeram" height="30" width="40" /></a>
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://developer.android.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/android/android-original-wordmark.svg" alt="android" width="40" height="40"/> </a> <a href="https://www.arduino.cc/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/arduino-1.svg" alt="arduino" width="40" height="40"/> </a> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cs/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/csharp/csharp-original.svg" alt="csharp" width="40" height="40"/> </a> <a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a> <a href="https://www.w3.org/html/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/html5/html5-original-wordmark.svg" alt="html5" width="40" height="40"/> </a> <a href="https://www.linux.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/> </a> <a href="https://opencv.org/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/opencv/opencv-icon.svg" alt="opencv" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> </p>
