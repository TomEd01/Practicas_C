//13381 Suma de dados
#include <bits/stdc++.h>
using namespace std;
int main(){
   int i;
   int dato, suma;
   suma=0;
   	for(i=0;i<3;i++){
		cin>>dato;
		if ((dato>0)&&(dato<7)){
			suma=suma+(7-dato);
		} 
		else return 0;
	}
	cout<<suma<<'\n';
}