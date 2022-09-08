# Crear una Libreria En Arduino editar falta agregar archivo cpp


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
