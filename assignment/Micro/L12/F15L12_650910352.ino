int redPin = 11;
int greenPin = 10;
int bluePin = 9;
String textin;
String R,G,B;
void setup()
{
      Serial.begin(9600);
      pinMode(redPin,OUTPUT);
      pinMode(greenPin,OUTPUT);
      pinMode(bluePin,OUTPUT);
}
void loop()
{
      if (Serial.available())
            textin = Serial.readStringUntil('\n');
    
      if (textin.startsWith("r"))
      {
            R = textin.substring(1);
            analogWrite(redPin,R.toInt());
      }
      
      if (textin.startsWith("g"))
      {
            G = textin.substring(1);
            analogWrite(greenPin,G.toInt());
      }
      
      if (textin.startsWith("b"))
      {
            B = textin.substring(1);
            analogWrite(bluePin,B.toInt()); 
      }      
}
