//6339 Manejando Dos Pilas
#include <bits/stdc++.h>
using namespace std;
struct Nodo {
        int dato;
        Nodo *siguiente;
};
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
	} else return -1;
}
void Imprime(Nodo *&pila ){
        Nodo *aux = pila;
        int n=0;
        if (aux != NULL){
		    do{
                n = aux->dato;
			    cout <<n<<" ";
                aux = aux->siguiente;
            }while(aux != NULL);
	}
    cout<<endl;
}
void Transferir(int n, Nodo *&pila1, Nodo *&pila2){
    int dato=0;
	if (n > 0){
        while (n > 0) {
		   if (pila1 != NULL){
			    dato = Pop(pila1);
			    Push(pila2,dato);
		    }n--;
        }
    }
}
int main(){
	Nodo *pila1 = NULL;
	Nodo *pila2 = NULL;
	int T, i, operacion, valor, n, num_pila;
	pila1 = NULL;
	pila2 = NULL;
    cin >> T;
    cin.ignore();
	if ((T >= 1) && (T <= 500)) {
	   for(i=0; i < T; i++) {
        	cin>>operacion;   // Se lee el numero
	        switch (operacion) {
		 	case 1: // Push
                cin.ignore(1);
                cin >> num_pila;
 			 	if ((num_pila == 1) || (num_pila == 2)) {
        				cin.ignore(1);
					    cin >> valor;
					if ((valor >= -500) && (valor <= 500)) {
						if (num_pila == 1) {Push(pila1,valor);}
                        if (num_pila == 2) {Push(pila2,valor);}
					} else {
						cout << "Error: valor no valido" << endl;
						return 0;
					}
				} else cout<<" Numero de pila no valido"<<endl;
				break;
			case 2: // Transferir
				cin.ignore(1);
                cin >> num_pila;
                if ((num_pila == 1) || (num_pila == 2)) {
				    cin.ignore(1);
                    cin >> valor;
				    if((valor >= -500) && (valor <= 500)) {
                        if (num_pila == 1) {Transferir(valor,pila1,pila2);}
					    if (num_pila == 2) {Transferir(valor,pila2,pila1);}
				    }
				}
				break;
			default:
					cout << "Error: valor no valido" << endl;
				break;
    		 }
	   }
	   Imprime(pila1);
	   Imprime(pila2);
	}
	return 0;
}