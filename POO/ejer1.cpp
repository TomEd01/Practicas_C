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
    float b,a;int i;
    Cuadrilatero *cua = new Cuadrilatero[3];
    for(i=0;i<3;i++){
        cin >> b >> a;
        cua[i] = Cuadrilatero(b,a);
    }
    for(i=0;i<3;i++){
        cout << "Area del cuadrilatero: " << (i+1) << ": " << cua[i].getArea() << '\n';
    }
    return 0;
}