//4331. Formula Recursiva Uno
#include <bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<=5){
        return 1;
    }else{
        return func(n-2)*5;
    }
}
int main(){
    int n;
    cin >> n;
    if(n<=60){ cout << func(n); }
    return 0;
}