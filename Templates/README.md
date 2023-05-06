## Templates 🦎  

### **Introducción:**

Este código implenta los templates para la creacion de un stack que el cual se puede definir de tipo int, double, ect. 

### **Includes:**

El include: *#include <iostream>* es necesario ya que utilizamos el *std::cout* para impimir un mensaje.

El include: *#include <vector>* es necesario para crear la pila.

El include: *#include <algorithm>* es necesario ya que se utiliza la funcion *for_each* la cual se encuentra en esa biblioteca.

El include: *#iclude <stdexcept>* es necesario ya que se utiliza la excepcion *out_of_range* la cual se encuentra en esa bilbioteca.

El include: *#iclude <functional>* es necesario ya que usamos: *std::function< >&* la cual se encuentra dentro de esta biblioteca.

### **Uso:**
Para la utilización del código se tiene que seguir los siguientes lineamientos:

Para crear un nuevo stack se usa el siguiente codigo: *Stack<type_value> name*.

Para añadir valores se usa la función: *name.push(value)*.

Para aplicar un función a cada elemento de la pila se usa: *name.foreach()*.

Para eliminar todos los elementos de la pila se usa: *name.clear*.

Para eliminar y obtener el ultimo valor se usa la funció: *pop()*.

Para correr el programa se tiene que usar el archivo Makefile al poner en la terminal: *mingw32-make*. Al hacer esto se creara un archivo llamado *template.exe* y se ejecutara.
### **Contacto:**
Sebastián Vargas Quesada
correo: sebasvq106@gmail.com
