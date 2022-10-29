//11075 Promoviendo la sana distancia
#include <bits/stdc++.h>
using namespace std;
int lista[100000]={0};
int main(){
    int N,t,M=1,i,tel;
    cin>>N>>tel;
    t=tel;
    lista[tel]++;
    for(i=2; i<=N;i++){
        cin>>tel;
        lista[tel]++;
        if(lista[tel]>M){M=lista[tel]; t=tel;}
    }
    cout<<M<<' '<<t;
    return 0;
}