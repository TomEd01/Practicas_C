//6521 Evaluación Posfija
#include <bits/stdc++.h>
using namespace std;
struct Nodo {
        int dato;
        Nodo *siguiente;
};
Nodo *PILA = NULL;
void Push(Nodo *&pila, int n){
        Nodo *nuevo_nodo = new Nodo();
        nuevo_nodo->dato = n;
        nuevo_nodo->siguiente = pila;
        pila = nuevo_nodo;
}
int Pop(Nodo *&pila){
        Nodo *aux = pila;
        int n;
        if (pila != NULL) {
                n = aux->dato;
                pila = aux->siguiente;
                delete aux;
                return n;
        } else
                return -1;
}
void suma(){
	float res, a, b;
        b = Pop(PILA);
        a = Pop(PILA);
	res = a + b;
	Push(PILA,res);
}
void resta(){
	float res, a, b;
	b = Pop(PILA);
	a = Pop(PILA);
	res = a - b;
	Push(PILA,res);
}
void multiplicacion(){
        float res, a, b;

        b = Pop(PILA);
        a = Pop(PILA);
        res = a * b;
        Push(PILA,res);
}
void division(){
        float res, a, b;
        b = Pop(PILA);
        a = Pop(PILA);
        res = a / b;
        Push(PILA,res);
}
void potencia(){
        float res, a, b;
        b = Pop(PILA);
        a = Pop(PILA);
        res = pow(a,b);
        Push(PILA,res);
}
float evaluarPostfija(string cadena){
    float res=0;
    int longitud, dato, pos;
    string token;
    longitud = cadena.length();
    do {
            pos = cadena.find(" ");
            longitud = cadena.length();
            if (pos == 0) {
                cadena.erase(0, pos + 1);
            } else {
                if ((pos == -1)&&(longitud == 0)) {
                        break;
                }
                token = cadena.substr(0, pos);
                cadena.erase(0, pos + 1);
		if (token == "+") suma();
		else if (token == "-") resta();
		else if (token == "*") multiplicacion();
		else if (token == "/") division();
		else if (token == "^") potencia();
		else {
			sscanf(token.c_str(),"%d", &dato);
			Push(PILA,dato);
		}
             }
    } while (pos >= 0);
        res = Pop(PILA);
	return res;
}
int main(){
   string linea;
   float resultado;
   int   longitud;
   PILA = NULL;
    getline(cin,linea);
    longitud = linea.length();
    if (longitud > 0) {
       resultado = evaluarPostfija(linea);
       cout <<resultado<<endl;
    }
   return 0;
}