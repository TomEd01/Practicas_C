//5729 Recursividad Alfa
#include <bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<50)return 2;
    else return func(n-1)+(func(n-5)*2);
}
int main(){
    int n;
    cin>>n;
    if (n>160) return 0;
    cout<< func(n);
    return 0;
}