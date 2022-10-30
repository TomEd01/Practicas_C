//8632 Días de Felicidad
#include <bits/stdc++.h>
using namespace std;
int n,dias[1000000],diasfeliz = 0,rachaFeliz=0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> dias[i];
    rachaFeliz = 1;
    for(int i=1;i<n;i++){
        if(dias[i-1]<=dias[i]) rachaFeliz++;
        else {
            diasfeliz=max(diasfeliz,rachaFeliz);
            rachaFeliz =1;
        }
    }
    diasfeliz = max(diasfeliz,rachaFeliz);
    cout << diasfeliz;
    return 0;
}