#include <bits/stdc++.h>
using namespace std;
class person{
    private:
    string nom;
    int edad;
    float cal;
    public:
    person(string a,int b,float c){
        nom=a;
        edad=b;
        cal=c;
    }
    void setNom(string a){nom=a;}
    void setEdad(int b){edad=b;}
    void setCal(float c){cal=c;}
    string getNom(){return nom;}
    int getEdad(){return edad;}
    float getCal(){return cal;}
};
int main(){
    string a;
    int b;
    float c;
    std::cin >> a >> b >> c;
    person p(a,b,c);
    std::cout << "Nombre: " << p.getNom() << std::endl;
    std::cout << "Edad: " << p.getEdad() << '\n';
    std::cout << "Calificación: " << p.getCal() << '\n';
    return 0;
}