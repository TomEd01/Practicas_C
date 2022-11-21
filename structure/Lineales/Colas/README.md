# COLAS (*en estructuras de datos*)


```c++
/*
El contenido de dq: 0 1 4 9 16 25 36 49 64 81 
El promedio de los elementos es: 28

dq tras incluir elementos al final: 0 1 4 9 16 25 36 49 64 81 100 136 
dq tras usar back-pop con un elemento: 0 1 4 9 16 25 36 49 64 81 100 

El primero y ultimo elemento de dq como lo indican begin()  y rend()-1:
0,0
El primero y ultimo elemento de dq como lo indican rbegin()  y rend()-1:
100,0

Se aplica un bucle al vector en direcci¢n directa:
0 1 4 9 16 25 36 49 64 81 100 

Ahora, se usa un iterador inverso para aplicar un bucle en direcci¢n inversa:
100 81 64 49 36 25 16 9 4 1 0 

dq contiene un subrango de dq: 4 9 16 25 36 
Tras las asignaciones, dq2 ahora contiene: 4 100 88 25 99 
dq3 contiene la inversa de dq: 100 81 64 49 36 25 16 9 4 1 0 

dq tras usar push_front(): -31416 0 1 4 9 16 25 36 49 64 81 100 

Al eliminar elementos al frente de dq.
Eliminando: -31416
Eliminando: 0
Eliminando: 1
Eliminando: 4
Eliminando: 9
Eliminando: 16
Eliminando: 25
Eliminando: 36
Eliminando: 49
Eliminando: 64
Eliminando: 81
Eliminando: 100
Ahora dq esta vacia.
*/
```