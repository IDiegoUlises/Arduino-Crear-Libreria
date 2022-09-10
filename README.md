# Crear una Libreria En Arduino editar falta agregar archivo cpp 
se dice que el archivo h es de cabezera


<p align="center">
  <img  src="https://github.com/IDiegoUlises/Arduino-Crear-Libreria/blob/master/Images/library-fondo-black.png">
</p>



## Sketch
```c++
#include "libreria.h"

void setup() 
{
  funcion();
}

void loop() 
{
}
```
* **Invoca una funcion de la libreria**

## libreria.h
```c++

void funcion()
{
  Serial.begin(9600);
  Serial.println("hola mundo");
}
```
* **Este archivo contiene las variables y funciones**

## Debug
<img  src="https://github.com/IDiegoUlises/Arduino-Crear-Libreria/blob/master/Images/puerto-serial.png">

# Edtiar esta documentacion para que sea mas completa falta agregar un archivo cpp y un keyword que son palabras claves de colores


## Main
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

## CPP
```c++
#include "libreria.h"

int sumar(int a, int b)
{
  return a + b;
}


//Aqui las funciones
//Aqui solo se pueden utilizar las variables
//que fueron declaradas en libreria.h
```

## libreria.h
```c++
#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <Arduino.h>

int sumar(int a, int b);

#endif

//Aqui se crean las variables
```

