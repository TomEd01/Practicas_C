#include <bits/stdc++.h>
using namespace std;
struct fechaNacimiento{
    int dia,mes,anio;
};
int main()
{
    fechaNacimiento fn;
    std::cin >> fn.dia >> fn.mes >> fn.anio;
    std::cout << "Su fecha de nacimiento de es el " << fn.dia << "/"<< fn.mes << "/" << fn.anio << std::endl;
}
