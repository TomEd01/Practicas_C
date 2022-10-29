//8586 Calculadora-Factorial
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tot=1;
    cin >> n;
    if(n<=15){
        for(int i=1;i<=n;i++){
            tot=tot*i;
        }
        cout << tot;
    }
    return 0;
}