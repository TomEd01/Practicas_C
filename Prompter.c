#include <stdio.h>
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