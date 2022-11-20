#include <stdio.h>
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