//4631 Corrigiendo el Semestre
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="";
    int n,i;
    cin>>n;
    int vector[n];
    for(i=0;i<n;i++) cin>>vector[i];
    for(i=0;i<n;i++){
        if(i==0){
            if(vector[i]>vector[i+1]) s+="E";
            else s+="M";
        }else if(i==n-1){
            if(vector[i]>vector[i-1]) s+="E";
            else s+="M";
        }else{
            if(vector[i]>vector[i+1]&&vector[i]>vector[i-1])s+="E";
            else s+="M";
        }
        
    }
    std::cout << s << std::endl;
}