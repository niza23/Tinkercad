// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
}