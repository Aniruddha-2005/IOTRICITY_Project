
##  Features
- Automatic switching of street lights based on ambient light intensity.
- Simple, low-cost approach using Arduino and an LDR.
- Design files included for PCB fabrication or simulation.

##  Components & Hardware
- **Arduino Uno** — microcontroller platform.
- **LDR (Light-Dependent Resistor)** — to sense light levels.
- **Resistors** — for voltage divider setup with the LDR.
- **LED(s) or Relay Module** — to simulate or control actual street lights.
- **Breadboard / PCB** — for prototyping or custom board assembly.
- **Power Supply** — USB or external adapter.

##  Circuit Description
- LDR and a fixed resistor form a voltage divider connected to Arduino’s analog input (e.g., A0).
- Digital output (e.g., D8) controls an LED or relay module.
- When ambient light drops below a configurable threshold, the Arduino turns the light ON; when light is above the threshold, it turns OFF.

##  Arduino Sketch Example

```cpp
const int LDR_PIN = A0;
const int LIGHT_PIN = 8;
const int THRESHOLD = 500; // Adjust as needed

void setup() {
  pinMode(LIGHT_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.println(ldrValue);

  if (ldrValue < THRESHOLD) {
    digitalWrite(LIGHT_PIN, HIGH); // Turn ON
  } else {
    digitalWrite(LIGHT_PIN, LOW);  // Turn OFF
  }
  delay(500);
}
