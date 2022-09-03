#include <bits/stdc++.h>
using namespace std;
struct fechaNacimiento{
    int dia,mes,anio;
};
struct persona{
    string nombre;
    string correo;
    long fon;
    fechaNacimiento fn;
};
int main()
{
    persona p;
    std::cin >> p.fon;
    std::cin >> p.fn.dia >> p.fn.mes >> p.fn.anio >> p.nombre >> p.correo;
    std::cout << "La fecha de nacimiento de: "<< p.nombre << " es el " << p.fn.dia << "/"<< p.fn.mes << "/" << p.fn.anio << std::endl;
    std::cout << "Y su numero es: "<< p.fon << " y su correo es " << p.correo << std::endl; 
}
