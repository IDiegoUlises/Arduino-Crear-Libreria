#include "libreria.h"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int suma = sumar(2,3);
  Serial.println(suma);
}
