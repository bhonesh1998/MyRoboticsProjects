void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  int s1=digitalRead(A3);
  Serial.println(s1);
  delay(1000);
}
