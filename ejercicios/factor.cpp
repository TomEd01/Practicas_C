#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tot=1;
    cout << "Escrib el numero a factorizar no mayor a 15: ";
    cin >> n;
    if(n<=15){
        for(int i=1;i<=n;i++){
            tot=tot*i;
        }
        cout << "El factorial del numero " << n << " es: " << tot;
    }else{
        cout << "Tranquilo, me estoy actualizando";
    }
    return 0;
}