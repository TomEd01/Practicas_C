//7186 Girando un vector
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,g,k,i;
    cin >> n >> g;
    int x[n];
    for(i=0;i<n;i++) cin >> x[i];
    for(k=g%n;k>0;k--){
        int aux = x[n-1];
        for(i=n-1;i>0;i--) x[i]=x[i-1];
        x[0]=aux;
    }
    for (i=0;i<n;i++) cout << x[i]<<' ';
    return 0;
}