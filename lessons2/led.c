int i=0;
void setup()
{ 
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
  
}

void loop()
{
  for(i=0;i<8;i=i+2)
  {
    digitalWrite(i, HIGH);
    delay(500); 
    digitalWrite(i, LOW);
    delay(500); 
  }
  for(i=1;i<8;i=i+2)
  {
    digitalWrite(i, HIGH);
    delay(500); 
    digitalWrite(i, LOW);
    delay(500); 
  }
}