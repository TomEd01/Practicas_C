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
    cin >> b >> a;
    Triangulo tr(b, a);
    cout << "El area es: " << tr.getArea() << '\n';
    return 0;
}