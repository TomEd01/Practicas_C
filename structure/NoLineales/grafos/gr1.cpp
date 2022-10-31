#include <bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;
const int n=8;
bool visitado[n]{false};
void recorridoAnchura(int m[n][n], int ni){
    queue <int> cola;
    int c;
    cola.push(ni);
    visitado[ni]={true};
    while(!cola.empty()){
        ni=cola.front();
        cola.pop();
        cout<<ni<<' ';
        for(c=0;c<n;c++){
            if(m[ni][c]!=0 && m[ni][c]!=INT_MAX){
                if(visitado[c]!=true){
					visitado[c]=true;
                	cola.push(c);
                }
            }
        }
    }
}
void profundidad(int m[n][n], int np){
    stack <int> pila;
    int c;
    pila.push(np);
    visitado[np]={true};
    while(!pila.empty()){
        np=pila.top();
        pila.pop();
        cout<<np<<"\n";
        for(c=0;c<n;c++){
            if(m[np][c]!=0 && m[np][c]!=INT_MAX){
                if(visitado[c]!=true){
					visitado[c]=true;
                	pila.push(c);
                }
            }
        }
    }
}
int main(){
    int matriz[n][n]={
        {0,7,10,4,INT_MAX,INT_MAX,INT_MAX,INT_MAX},
        {7,0,6,INT_MAX,5,INT_MAX,INT_MAX,INT_MAX},
        {10,6,0,14,INT_MAX,12,INT_MAX,INT_MAX},
        {4,INT_MAX,14,0,INT_MAX,INT_MAX,1,INT_MAX,},
        {INT_MAX,5,INT_MAX,INT_MAX,0,8,INT_MAX,20},
        {INT_MAX,INT_MAX,12,INT_MAX,8,0,50,9},
        {INT_MAX,INT_MAX,INT_MAX,1,INT_MAX,50,0,26},
        {INT_MAX,INT_MAX,INT_MAX,20,9,26,0}
    };
    //recorridoAnchura(matriz,3);
    profundidad(matriz,0);
    return 0;
}