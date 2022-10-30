//6956 Paseo de la Reforma
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c=0,my=0;
	cin>>n;
	int matriz[n],si[n];
	for(i=0;i<n;i++){
		si[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>matriz[i];
	}
	for(i=0;i<n-1;i++){
		if(matriz[i]>matriz[i+1]) si[c]++;
		else c++;
	}
	for(i=0;i<=c;i++){
		if(si[i]>0){
			si[i]+=1;
			if(si[i]>my){
				my=si[i];
			}
		}
	}
	cout<<my;
}