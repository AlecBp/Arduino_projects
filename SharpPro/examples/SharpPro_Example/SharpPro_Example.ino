#include <SharpPro.h>

SharpPro sharp(0,10000,90);

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(sharp.distancia());
}
