
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
int LDR_VAR = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  LDR_VAR = analogRead(A0);
  Serial.println(LDR_VAR);
  if (LDR_VAR > 500) {
    digitalWrite(10, LOW);
  } else {
    digitalWrite(10, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
