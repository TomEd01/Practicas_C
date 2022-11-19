//4470 Alicia y las llaves doradas de las puertas
#include <bits/stdc++.h>
using namespace std;
int a, c;
int main()
{
    cin >> a;
    int vec[a];
    for (int i = 0; i < (a+2); ++i){vec[i] = 0;}
    for (int i = 0; i < a; ++i){
        cin>>c;
        vec[c] = i + 1;
    }
    cin >> a;
    for (int i = 0; i < a; ++i){
        cin>>c;
        cout<<vec[c]<<" ";
    }
}