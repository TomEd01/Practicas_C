//4872 RooConejos
#include <bits/stdc++.h>
using namespace std;
int main() {
    int C,P=1,S=0,M=1,i;
	cin >> C;
    if (C>=1 && C<=24){
        for (i=2;i<=C;i++){
               P=S+M;
               S=M;
               M=P;
        }
        cout << P;
    }
    return 0;
}