# 💻Estructuras De Datos Básicos Y Avanzados 🤓

Hablemos un poco sobre las **estructuras de datos** proviniendo de la programación, hablaremos desde lo más básico hasta lo avanzado, pero no te preocupes, todos los recursos estarán aquí, si no lo están, hágamelo saber.


# 🤔 ¿Que Son Las Estructuras De Datos?

Las estructuras de datos son **colecciones de valores**, las relaciones entre ellos y las funciones u operaciones que pueden aplicar a los datos.
De igual forma lo podríamos ver que nos permite de una forma en particular organizar los datos para que puedan ser utilizados eficientemente

## 👚Un Ejemplo Practico 

 Nos pueden dar ropa, _ordenada_ o _desordenada_ y nuestra tarea seria ordenarla en un ropero.
Si no la ordenamos de manera correcta pero nuestro ropero cierra diríamos _¡tarea terminada!_ pero si alguien llega a sacar ropa del ropero le costara sacar algo de ahí.
Entonces ahí es donde entran las estructuras de datos para poder ordenar nuestra ropa de manera eficiente, todo claro ¿no es así?
Si no es así no te preocupes y no se estrese vamos a hacerlo paso por paso
- Nos dan ropa desordenada.
- La tarea de nosotros seria ordenarla en el ropero.
- La podríamos acomodar, así como así, pero sería complicado encontrar una ropa que queremos.
- Es aquí donde encontramos **formas** para ordenar nuestra ropa en el ropero.
	- Por colores
	- Utilidad
	- Formas
- Por lo tanto, descubrimos que tenemos espacio como el de **Narnia**.
- Y **listo** utilizaste una estructura de dato, ahora esperemos que puedas codificar.

## 👨‍💻 Ejemplo De Estructuras De Datos 

Como vimos en el ejemplo anterior una forma de ordenar nuestra ropa, esta es una de muchas formas de organizar, así pasa con las estructuras de datos en la programación, ahora los ejemplos:
- Dinámicas y/o [Lineales](https://github.com/TomEd01/Practicas_C/tree/Main/structure/Lineales)
	- Pilas. [stack](https://github.com/TomEd01/Practicas_C/tree/Main/structure/Lineales/Pilas)
	- Colas. [queue](https://github.com/TomEd01/Practicas_C/tree/Main/structure/Lineales/Colas)
	- Listas. [Lists](https://github.com/TomEd01/Practicas_C/tree/Main/structure/Lineales/Listas)
- [Estáticas](https://github.com/TomEd01/Practicas_C/tree/Main/structure/Estaticas)
	- Vectores.
	- Vectores Bidimencionales.
	- Vectores Multidimensionales.
 -  No Dinámicas y/o [No Lineales](https://github.com/TomEd01/Practicas_C/tree/Main/structure/NoLineales) 
	 - [Grafos](https://github.com/TomEd01/Practicas_C/tree/Main/structure/NoLineales/grafos) 
	 - Arboles
> **Nota:** no profundice ya que en cada ejemplo tendrá su propia explicación, esto era una idea básica de lo que se viene, espero no abrumarte con tantos temas, pero sé que podrás con **todo** así de increíble eres y serás.
 

## ¿Como Se Hace Una Estructura Simple?

En el caso de C++ un **STRUCT** se puede utilizar para almacenar juntos elementos de diferentes tipos de datos. Es decir, la estructura es una colección de variables de diferentes tipos de datos bajo un solo nombre. Es similar a una clase en que, ambos tienen una colección de datos de diferentes tipos de datos.

Por ejemplo:

Supongamos que necesita almacenar información sobre su fecha de nacimiento, su día, mes y año. Puede crear variables como día, mes y año para almacenar los datos por separado.

Sin embargo, es posible que necesite almacenar información sobre muchas personas en el futuro. Significa que se crearán variables para diferentes individuos. Por ejemplo, día1, mes1, anio1, etc. Para evitar esto, es mejor crear una estructura.

## ¿Cómo Declarar Una Estructura En C++?

La palabra clave define un tipo de estructura seguido de un identificador (nombre de la estructura). ```struct```
Luego, dentro de los frenos rizados, puede declarar uno o más miembros (declare variables dentro de los frenos rizados) de esa estructura. Por ejemplo:
```cpp
#include  <bits/stdc++.h>
using  namespace std;
struct  fechaNacimiento{
	int  dia,mes,anio;
};
```
Aquí se define una estructura que tiene tres fechas.
> **Nota:** cuando se crea una estructura, no se asigna memoria

Una vez que declare una estructura como la anterior. Puede definir una variable de estructura como:  ```fechanacimiento```
```cpp 
int main(){
	fechaNacimiento fn;
}
```
Aquí, se define una variable de estructura que es de tipo estructura.
Cuando se define la variable de estructura, solo entonces el compilador asigna la memoria requerida.

## ¿Cómo Accedemos A Los Miembros De Dicha Estructura?

Se accede a los miembros de la variable structure mediante un **punto (.)**   operador.
Supongamos que desea acceder a la variable de estructura y asignarle 50. Puede realizar esta tarea mediante el código siguiente a continuación: ```fn.dia=10;```.
Ya que tenemos las piezas básicas ahora daremos un **Ejemplo**:
```cpp
#include <bits/stdc++.h>
using namespace std;
struct fechaNacimiento{
	int dia,mes,anio;
};
int main(){
	fechaNacimiento fn;
	std::cin >> fn.dia >> fn.mes >> fn.anio;
	std::cout << "Su fecha de nacimiento de es el " << fn.dia << "/"<< fn.mes << "/" << fn.anio << std::endl;
}
```
**Salida**
```
10
5
2003
Su fecha de nacimiento de es el 10/5/2003
```


## Recursos Extras

Este recurso extra se estará utilizando en las estructuras o algunos ejemplos que lo requieran según su lógica.

### Apuntadores y/o Prompter

En programación se hace referencia a la localidad de los objetos al igual de los objetos mismos (al contenido de tales localidades), un ejemplo, si x se declara como entero, &x quiere decir que se ha reservado para que contenga x, ejemplo:

```c
int *pi;
float *pf;
char *pc;
```
El asterisco indica que los valores de las variables que se declaran son apuntadores del tipo especificado en la declaración y no de objetos de tal tipo.

De igual forma un apuntador es como cualquier otro tipo de dato en muchos aspectos. El valor de un apuntador es una localidad de memoria, de la misma forma que el valor de un entero es un número.

Es posible asignar valores de apuntador igual que otro valor. Por ejemplo:

```c
pi = &x; //Asigna un apuntador al entero x para la variable de apuntador pi
```
De hecho, los tipos `pi` y `pf` son diferentes: `pi` es un apuntador de tipo enteero, `pf` es un apuntador

de tipo flotante y `pc` es apuntador tipo caracter, los cuales son llamados **Tipo base de pdt**

> En resumen es una variable que contiene la dirección de otro objeto del programa

La conversión de `pf` del tipo _"apuntador tipo flotante"_ al tipo _"apuntador a un entero"_ se hace escribiendo:

```c
pi = (int *) pf;
```
donde la forma (int*) convierte el valor de `pf` al tipo “apuntador a un int” o “int *".

La importancia de cada apuntador que se asocia con un tipo base particular se hace evidente al revisar las opciones aritméticas que proporcionan C/C++ para apuntadores.

De igual forma, si el valor de la variable pc es 100 (recuerde que pc es un apuntador a un carácter) y un carácter tiene una longitud de un byte, `pc` — 1 se refiere a la localidad 99, `pc` + 1 se refiere a la localidad 101 y `pc` + 2 se refiere a la localidad 102. Así, el resultado del apuntador aritmético en C/C++ depende del tipo base del apuntador.

También tome en cuenta la diferencia entre *pi + 1, la cual se refiere a un 1 agregado a un entero *pi, y *(pi + 1), la cual se refiere a un entero después del entero en la localidad `pi`.
Un área en la que los apuntadores de C/C++ tienen una función predominante en el paso de parámetros a funciones. En general, los parámetros se pasan a una función de C/C++ mediante valor, es decir, los valores que se pasan se copian a los parámetros de la función llamada en el momento en que se invoca. Si el valor de un parámetro se modifica dentro de la función, no se altera el valor en el programa que lo llama. Por ejemplo, considere el segmento de programa y la función siguientes:
```c
void func(int y){
	++y; //Incrementa el valor de y
	printf("%d\n", y); //Imprime 6
}
void main(){
	int x = 5; //Se inicializa la variable
	printf("%d\n", x); //Imprime 5
	func(x); //Invoca func
	printf("%d\n", x); //Imprime 5
}
```
Si queremos usar func para modificar el valor de x, debemos pasar la direccion de x en la forma siguiente:
```c
void func(int *py){
	++(*py);
	printf("%d\n", *py); //Imprime 6
}
void main(){
	int x = 5; //Se inicializa la variable
	printf("%d\n", x); //Imprime 5
	func(&x); //Invoca func con el valor del puntero
	printf("%d\n", x); //Imprime 6
}
```
**Los apuntadores son el mecanismo usado en C/C++ para permitir que una función llamada modifique las variables en la función que llama.**