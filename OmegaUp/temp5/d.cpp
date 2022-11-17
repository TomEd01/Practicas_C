//11601 Ordenando cubetas
#include <bits/stdc++.h>
using namespace std;
int buscar(int num,int vec[],int rep){
    int con=0;
    vec[rep];
    for(int i=0;i<rep;i++){
        if(vec[i]==num) con++;
    }
    if(con>0) return con;
    else return 0;
}
int main(){
    int a,b,i;
    cin>>a>>b;
    int nume[a];
    for(i=0;i<a;i++) cin>>nume[i];
    for(i=1;i<=b;i++) cout<<i<<": "<<buscar(i,nume,a)<<"\n";
}