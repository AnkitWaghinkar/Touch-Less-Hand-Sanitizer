int RELAY = 10;
int SENSOR = 8;
int SENSOR-STATUS;
void setup()
{
  pinMode(RELAY, OUTPUT);
  pinMode(SENSOR, INPUT);
}
void loop()
{
  SENSOR_STATUS = digitalRead(SENSOR);
  if (SENSOR_STATUS == LOW)                       
{
    digitalWrite(RELAY, HIGH);
    delay(250);
    digitalWrite(RELAY, LOW);
    delay(2000);
}
  else 
{
    digitalWrite(RELAY, LOW);
}
}
