//4333 Formula Recursiva Tres
#include <bits/stdc++.h>
using namespace std;
long long x;
long long func(int n){
    if(n<=5){
        cout << "1" << "\n";
        return 1;
    }else{
        x = func(n-2)*5;
        cout << x << "\n";
        return x;
    }
}
int main(){
    int n; 
    cin >> n;
    if(n<=120) x = func(n);
    return 0;
}