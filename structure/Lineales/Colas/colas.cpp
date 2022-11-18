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
    cout<<"El promedio de los elementos es: "<<avg<<"\n\n";

    //Agrega elementos al final de dq.
    dq.push_back(100);
    dq.push_back(136);
    muestra("dq tras incluir elementos al final: ",dq);

    //Ahora usa pop_back() para eliminar un elemento de dq como dq.pop_back()
    dq.pop_back();
    muestra("dq tras usar back-pop con un elemento: ",dq);
    cout<<endl;

    cout<<"El primero y ultimo elemento de dq como lo indican begin()  y rend()-1:\n"<<*dq.begin()<<","<<*(dq.rend()-1)<<"\n";
    cout<<"El primero y ultimo elemento de dq como lo indican rbegin()  y rend()-1:\n"<<*dq.rbegin()<<","<<*(dq.rend()-1)<<"\n\n";

    //Declara un iterador a una deque<int>
    deque<int>::iterator itr;
    // Ahora, declara un iterador inverso a una deque<int>
    deque<int>::reverse_iterator ritr;
    // Recorre en ciclo dq en dirección directa usando un iterador. 
    cout << "Se aplica un bucle al vector en direcci\u00a2n directa:\n"; 
    for(itr = dq.begin(); itr != dq.end(); ++itr) cout << *itr << " ";
    cout << "\n\n"; 
    cout << "Ahora, se usa un iterador inverso para aplicar un bucle en direcci\u00a2n inversa:\n"; 
    // Recorre dq en ciclo en dirección inversa uilizando un iterador inverso. 
    for(ritr = dq.rbegin(); ritr != dq.rend(); ++ritr) cout << *ritr << " ";
    cout << "\n\n";
    //Crea otra deque(cola) que contiene subrango de dq.
    deque<int> dq2(dq.begin()+2,dq.end()-4);
    //Despriega contenido de dq2 empleando iterador
    muestra("dq contiene un subrango de dq: ",dq2);
    //Cambia los valores de algunos elementos de dq2
    dq2[1]=100;
    dq2[2]=88;
    dq2[4]=99;
    muestra("Tras las asignaciones, dq2 ahora contiene: ",dq2);
    
}