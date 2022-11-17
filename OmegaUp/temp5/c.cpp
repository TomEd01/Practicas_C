//7454 Un problema facil 2
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,b,k,cont=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        b=a[i];
        for(j=i;j<n-1;j++){
            if(k==a[j+1]-b){
                cont++;
            }
        }
    }
    cout<<cont;
}