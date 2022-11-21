#include <bits/stdc++.h>
using namespace std;
struct trianguloT{
    float b,a;
};
int main(){
    trianguloT tr;
    cin >> tr.b >> tr.a;
    float area=(tr.b*tr.a)/2;
    cout << "El area es: " << area;
    return 0;
}