#include <bits/stdc++.h>
#include <vector>
using namespace std;
void mostrar(const char *msg,vector<char>vec){
    vector<char>::iterator itr;
    cout<<msg;
    for(itr=vec.begin();itr!=vec.end();++itr) cout<<*itr<<" ";
    cout << "\n\n";
}
int main(){
    //Declaramos un vector vacio que puede contener objeptos en char
    vector<char>v;
    //Declaramos un iterador al vector<char>
    vector<char>::iterator itr;
    //Obtenemos un iterador al principio de v.
    itr=v.begin();
    //Inserta caracteres en v. Se devuelve un iterador al objepto insertado
    itr=v.insert(itr,'A');
    itr=v.insert(itr,'B');
    v.insert(itr,'C');
    //Desplegamos el contenido de v
    mostrar("El contenido de v: ",v);

    //Declaramos un iterador inverso
    vector<char>::reverse_iterator ritr;
    //Usamos el iterador inverso para mostrar el contenido de v en reversa
    cout<<"Se muestra v en reversa: ";
    for(ritr=v.rbegin();ritr!=v.rend();++ritr) cout<<*ritr<<" ";
    cout<<"\n\n";
    
    //Creamos otro vector que es el mismo que el primero
    vector<char>v2(v);
    mostrar("El contenido de V2 es: ",v2);
    //Mostramos el tamaño de v, que es el número de elementos
    cout<<"El tamaño de v es: "<<v.size()<<"\n\n";

    //Comparamos dos contenedores.
    if(v==v2) cout<<"V y V2 son equivalentes.\n\n";

    //Inserta más caracteres en v y v2. Esta vez, se insertan en el final
    cout<<"Se insertaron caracteres adicionales en v y v2. \n";
    v.insert(v.end(),'D');
    v.insert(v.end(),'E');
    v2.insert(v2.end(),'F');
    mostrar("El contenido de v: ",v);
    mostrar("El contenido de v2: ",v2);

    /**Determina si v es menos que v2. Se trata de una comparación lexicográfica
    Por ello, el primer elemento no coinciden del contenedor determina cúal
    contenedor es menos que otro**/
    if(v<v2) cout<<"v es menos que v2. \n\n";

    //Ahora inserta z en el inicio de v
    v.insert(v.begin(),'Z');
    cout<<"Se inserta Z al principio de v.\n";
    mostrar("El contenido de v: ",v);

    //Comparamos una vez mas
    if(v>v2) cout<<"Ahora v es mayor que v2.\n\n";

    //Elimina el primer elemento de v2
    v2.erase(v2.begin());
    mostrar("v2 tras eliminar el primer elemento: ",v2);

    //Creamos otro vector
    vector<char>v3;
    v3.insert(v3.end(),'X');
    v3.insert(v3.end(),'Y');
    v3.insert(v3.end(),'Z');
    mostrar("El contenido de v3: ",v3);

    //Intercambiamos el contenedor de v y v3
    cout<<"Se intercambio v y v3.\n";
    v.swap(v3);
    mostrar("El contenido de v: ",v);
    mostrar("El contenido de v3: ",v3);

    //Limpia v
    v.clear();
    if(v.empty()) cout<<"v ahora esta vacio.";
    return 0;
}