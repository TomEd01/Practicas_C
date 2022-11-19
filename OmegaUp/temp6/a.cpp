//4401 Examen de paridad
#include <bits/stdc++.h>
using namespace std;
struct Nodo {
	int dato;
	Nodo *siguiente;
};
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	if (cola_vacia(frente)) {
		frente = nuevo_nodo;
	} else {
		fin -> siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
bool cola_vacia(Nodo *frente){
	if(frente == NULL) {
		return true;
	} else {
		return false;
	}
}
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente-> dato;
	Nodo *aux = frente;

	if (frente == fin) {
		frente = NULL;
		fin = NULL;
	} else{
		frente = frente->siguiente;
	}
	delete aux;
}
int main(){
   Nodo *frente = NULL;
   Nodo *fin = NULL;
   int dato, N, i, pos, dif;
   int paridad;
   int paridad1;
   int paridad2;
   int paridad3;
   	cin >> N;
   	if ((N < 3) || (N > 100)) return 0;
	for (i=0; i < N; i++){
		cin >> dato;
		if(dato > 100) return 0;
		insertarCola(frente, fin, dato);
	}
   	paridad1 = 0;
   	paridad2 = 0;
   	paridad3 = 0;
   	pos = 1;
   	i=0;
   	while(i < 3){
		suprimirCola(frente, fin, dato);
	   	if (i == 0) paridad1 = dato%2;
	   	if (i == 1) paridad2 = dato%2;
               	if (i == 2) paridad3 = dato%2;
                i++;
	}
	if(paridad1 == paridad2) {
		if (paridad1 == paridad3) {
			paridad = paridad1;
			pos = 1;
			dif = 0;
		} else {
			paridad = paridad3;
			pos = 3;
			dif = 1;
		}
	} else {
		if(paridad1 == paridad3) {
			paridad = paridad2;
			pos = 2;
			dif = 1;
		} else {
			paridad = paridad1;
			pos = 1;
			dif = 1;
		}	
	}

	if (dif == 1) {
		cout <<pos<<endl;
		return 0;
	}
	while (frente != NULL){
		suprimirCola(frente, fin, dato);
		i++;
		paridad1 = dato%2;

		if (paridad != paridad1) {
			paridad = paridad1;
			pos = i;
			dif = 1;
			break;
		}
   	}
	if (dif == 1) {
        cout <<pos<<endl;
	}
   	return 0;
}