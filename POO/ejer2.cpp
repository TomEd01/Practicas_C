#include <bits/stdc++.h>
using namespace std;
class Triangulo{
private:
    float base, altura;

public:
    Triangulo() {}
    Triangulo(float b, float a){
        base = b;
        altura = a;
    }
    float getArea(){
        return (base * altura) / 2;
    }
};
int main(){
    float b, a;
    int i;
    Triangulo *tr = new Triangulo[3];
    for (i = 0; i < 3; i++){
        cin >> b >> a;
        tr[i] = Triangulo(b, a);
    }
    for (i = 0; i < 3; i++){
        cout << "Area del triangulo: " << (i + 1) << ": " << tr[i].getArea() << '\n';
    }
    return 0;
}