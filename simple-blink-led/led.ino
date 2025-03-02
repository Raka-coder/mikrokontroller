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
