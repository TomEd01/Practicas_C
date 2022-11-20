//6352-Cuantos Unos
#include <bits/stdc++.h>
using namespace std;
int binario(int n){
    int c=0;
    if(n%2!=0) c++;
    if (n!=0) binario(n/2);
    return c;
}
int main(){
    int num;
    cin>>num;
    cout<<binario(num);
    return 0;
}
