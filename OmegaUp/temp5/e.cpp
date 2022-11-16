//12176 Cuantas veces aparece el numero
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,v,i;
    cin>>n>>m;
    int ventas[n+1]={0};
    for(i=0;i<n;i++){
        cin>>v;
        ventas[v]++;
    }
    for(i=0;i<=n;i++){
        if(ventas[i]>=m){
            cout<<i<<" "<<ventas[i]<<"\n";
        }
    }
}