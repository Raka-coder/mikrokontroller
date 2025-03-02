# Simple Blink LED Project

This project demonstrates how to blink an LED using a WEMOS D1 MINI microcontroller. It is a basic example to get started with Arduino programming and microcontroller projects.

## Components Required

- WEMOS D1 MINI
- LED
- Jumper wires
- Breadboard

## Circuit Diagram

1. Connect the LED's anode (longer leg) to the D1 pin on the WEMOS D1 MINI through a 220 Ohm resistor.
2. Connect the LED's cathode (shorter leg) to the GND pin on the WEMOS D1 MINI.

## Code Explanation

The code to make the LED blink is written in C++ and uploaded to the WEMOS D1 MINI using the Arduino IDE.

### Code

```cpp
// simple-blink-led/led/led.ino
// Mikrokontroller : WEMOS D1 MINI
// Simple Blink LED

#define led D1   // set pin ke D1

void setup() {
  pinMode(led, OUTPUT); // set LED sebagai OUTPUT
}

void loop() {
  digitalWrite(led, HIGH); // LED ON
  delay(1000);              // delay 1 detik
  digitalWrite(led, LOW);  // LED OFF
  delay(1000);             
}
```

### Explanation

- **Setup**: The `setup()` function configures the LED pin as an OUTPUT.
- **Loop**: The `loop()` function alternates the LED state between HIGH (ON) and LOW (OFF) every 1000 milliseconds (1 second), creating a blinking effect.

## Getting Started

1. Install the Arduino IDE from the official website.
2. Connect your WEMOS D1 MINI to your computer using a USB cable.
3. Open the Arduino IDE and paste the provided code.
4. Select the correct board and port from the Tools menu.
5. Upload the code to the WEMOS D1 MINI.

## Conclusion

This project is an introduction to programming microcontrollers and using them to control basic electronic components. Once you understand this example, you can expand it into more complex projects.


