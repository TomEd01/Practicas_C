#include <bits/stdc++.h>
using namespace std;
class Cuadrilatero{
    private:
    float base,altura;
    public:
    Cuadrilatero(){}
    Cuadrilatero(float b,float a){
        base=b;altura=a;
    }
    float getArea(){
        return base*altura;
    }
};
int main(){
    float bas,alt;int i;
    cin >> bas >> alt;
    Cuadrilatero cu(bas,alt);
    cout << "El area " << cu.getArea() << "\n";
    return 0;
}