//11231	Recortando palabras
#include <bits/stdc++.h>
using namespace std;
int main(){
    string cadena;
    cin >> cadena;
    int rango,i=0,num_cadena = cadena.size();
    cin>>rango;
    cout<< cadena.substr(0,rango)<<cadena.substr(num_cadena-rango);
}