//4386 Formula Recursiva Seis
#include <bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<=20){
        return 1;
    }else{
        return func(n-5)+5+n;
    }
}
int main(){
    int n;
    cin >> n;
    if(n<=40){
        cout << func(n);
    }else{
        cout << "Error";
    }
    return 0;
}