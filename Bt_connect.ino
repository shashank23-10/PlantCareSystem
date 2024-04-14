char pardeep = 0; 
     
void setup()
  {
  Serial.begin(9600);
  }

void loop()
{
  if (Serial.available() > 0)
    {
    pardeep = Serial.read();
    }
  else
    {
      Serial.println(pardeep);
      delay(1000);
    }
 }
