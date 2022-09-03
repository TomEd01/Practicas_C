#include <bits/stdc++.h>
using namespace std;
struct persona {
    string nombre;
    int edad;
    float cal;
};
int main(){
    persona p[3];
    int i;
    for (i=0; i<3; i++){
        cin >> p[i].nombre;
        cin >> p[i].edad;
        cin >> p[i].cal;
    }
    for (i=0; i<3; i++){
        cout << "\nNombre " << (i+1) << ":" << p[i].nombre << '\n';
        cout << "Edad " << (i+1) << ":" << p[i].edad << '\n';
        cout << "Calificacion " << (i+1) << ":" << p[i].cal << '\n';
    }
    return 0;
}