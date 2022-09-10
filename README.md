# Crear Una Libreria En Arduino 

<p align="center">
  <img  src="https://github.com/IDiegoUlises/Arduino-Crear-Libreria/blob/master/Images/Codigo-Imagen.png">
</p>

## Sketch
```c++
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
```

## libreria.cpp
```c++
#include "libreria.h"

int sumar(int a, int b)
{
  return a + b;
}
```
* Se utilizan la funciones

## libreria.h
```c++
#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <Arduino.h>

int sumar(int a, int b);

#endif

```
* Se crean las variables

## Debug
<img  src="https://github.com/IDiegoUlises/Arduino-Crear-Libreria/blob/master/Images/Debug-2-Puerto-Serial.png">
