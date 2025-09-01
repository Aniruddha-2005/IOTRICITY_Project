// C++ code
//
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