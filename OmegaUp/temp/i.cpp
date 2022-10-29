//10325 El flojo
#include <bits/stdc++.h>
using namespace std;
int main(){
    string cadena;
    cin >> cadena;
    int num_cadena = cadena.size();
    if(num_cadena <= 4)cout << cadena;
    else cout << cadena[0] << (num_cadena-2) << cadena[num_cadena-1];
}