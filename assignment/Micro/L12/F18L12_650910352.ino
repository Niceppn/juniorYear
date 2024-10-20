int aval;
int level;
void setup() 
{
  Serial.begin(9600);
  delay(3000);
}
void loop() 
{
    aval = analogRead(A0);
    level = map(aval,0,1023,0,100);
    Serial.println(level);   
    delay(250);
}
