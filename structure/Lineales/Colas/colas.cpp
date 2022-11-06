#include <bits/stdc++.h>
#include <deque> //Libreria para cola
using namespace std;
//Despliega el contenido de una deque <int>
void muestra(const char *msg, deque<int>q){
    cout<<msg;
    for(unsigned i=0;i<q.size();i++) cout<<q[i]<<" ";
    cout<<"\n";
}
int main(){
    //Declara umna deque que tiene una capacidad inicial de 10
    deque<int>dq(10);
    /*Asigna algunos valores a sus elementos. Obsérvese que se
    hace mediante la sintaxis de subíndice de matriz estándar.
    Tómese nota de que el número de elementos en deque
    se obtiene al llamar size()*/
    for(unsigned i=0;i<dq.size();i++) dq[i]=i*i;
    muestra("El contenido de dq: ",dq);
    
    /*Calcula el promedio de los valores. Una vez más,
    observe el uso del operador subíndice*/
    int suma=0;
    for(unsigned i=0;i<dq.size();i++) suma+=dq[i];
    double avg= suma/dq.size();
    cout<<"El promedio de los elementos es: "<<avg<<"\n"; //28
}