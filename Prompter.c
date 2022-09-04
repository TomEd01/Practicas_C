#include <stdio.h>
void func(int y){
    ++y;
    printf("Con la función ");
    printf("%d", y);
}
void main(){
    int x = 5;
    func(x);
    printf("\n Sin la funcion ");
    printf("%d", x);
}