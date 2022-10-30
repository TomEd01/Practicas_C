//10633	Encuentra el tesoro
#include <bits/stdc++.h>
using namespace std;
int main(){
    int mat[3][3];
    int p[3],s[3][3];
    int i,j,c=0;
    //Ingresando los datos
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    //Diagonal principal
    for(i=0;i<3;++i){
        p[i]=mat[i][i];
    }
    //Diagonal secundaria
    for(i=0,j=3-1;i<3&&j<3;i++,j--){
        s[i][j]=mat[i][j];
        if(p[i]==s[i][j]){
            c++;
        }
    }
    if(c==3) cout<< "Tesoro encontrado";
    else cout<< "Sigue buscando";
    return 0;
}