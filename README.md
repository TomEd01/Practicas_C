# C++ y C
Bienvenidos a mi repositorio en donde alojare practicas, tareas y entre otras
cositas que estare haciendo a lo largo de mis estudios.

## Temas que veras
- [Estructuras de Datos](#estructuras-de-datos)
    - Lineales
        - Arreglos
- [Apuntadores en C (Prompter)](#apuntadores-yo-prompter)

## Estructuras de Datos
jfytfstyfdtffys

## Apuntadores y/o Prompter
En programación se hace referencia a la localidad de los objeptos al igual de los objeptos mismos
(al contenido de tales localidades), un ejemplo, si x se declara como entero, &x quiere decir que se ah reservado para
que contenga x, ejemplo:
```C
int *pi;
float *pf;
char *pc;
```
El aterisco indica que los valores de las variables que se declaran son apuntadores del tipo especificado en la declaración y no de objeptas de tal tipo.

De igual forma un apuntador es como cualquier otro tipo de dato en muchos aspectos. El valor de un 
apuntador es una localidad de memoria, de la misma forma que el valor de un entero es un número.
Es posible asignar valores de apuntador igual que otro valor. Por ejemplo:
```C
pi = &x; //Asigna un apuntador al entero x para la variable de apuntador pi
```
De hecho, los tipos `pi` y `pf` son diferentes: `pi` es un apuntador de tipo enteero, `pf` es un apuntador
de tipo flotante y `pc` es apuntador tipo caracter, los cuales son llamados **Tipo base de pdt**
> En resumen es una variable que contiene la dirección de otro objepto del programa

La conversión de `pf` del tipo _"apuntador tipo flotante"_ al tipo _"apuntador a un entero"_ se hace escribiendo:
```C
pi = (int *) pf;
```
donde la forma (int*) convierte el valor de `pf` al tipo “apuntador a un int” o “int *".

La importancia de cada apuntador que se asocia con un tipo base particular se hace evidente
al revisar las opciones aritméticas que proporcionan C/C++ para apuntadores. 

De igual forma, si el valor de la variable pc es 100 (recuerde que pc es un apuntador a un
carácter) y un carácter tiene una longitud de un byte, `pc` — 1 se refiere a la localidad 99, `pc` + 1 se
refiere a la localidad 101 y `pc` + 2 se refiere a la localidad 102. Así, el resultado del apuntador
aritmético en C/C++ depende del tipo base del apuntador.

También tome en cuenta la diferencia entre *pi + 1, la cual se refiere a un 1 agregado a un
entero *pi, y *(pi + 1), la cual se refiere a un entero después del entero en la localidad `pi`.

Un área en la que los apuntadores de C/C++ tienen una función predominante en el paso de
parámetros a funciones. En general, los parámetros se pasan a una función de C/C++ mediante valor, es
decir, los valores que se pasan se copian a los parámetros de la función llamada en el momento en
que se invoca. Si el valor de un parámetro se modifica dentro de la función, no se altera el valor
en el programa que lo llama. Por ejemplo, considere el segmento de programa y la función
siguientes:
```C
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

```C
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