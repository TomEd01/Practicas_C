//658-Suma de dados
#include <bits/stdc++.h>
using namespace std;
int main(){
	int casos, i, j, mayor=0, menor=70;
	cin>>casos;
    int dados[casos+1];
	for (i=0; i<casos; i++) cin>>dados[i];
	for (i=0; i<casos; i++){
		for(j=i+1; j<casos; j++){
			if (dados[i]+dados[j] > mayor)
				mayor = dados[i]+dados[j];
			if (dados[i]+dados[j] < menor)
				menor = dados[i]+dados[j];
		}
	}
	cout<<menor<<"\n"<<mayor;
	return 0;
}