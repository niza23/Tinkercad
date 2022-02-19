// C++ code
//
int temp = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  temp = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  if (temp < 25) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  if (temp > 25 || temp < 80) {
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  if (temp > 80) {
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  Serial.println(temp);
  delay(10); // Delay a little bit to improve simulation performance
}