#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void Reemplazar (Pila<int> &pila, int viejo, int nuevo){
    Pila<int> pilaAux;
    while (!pila.esVacia()){
        int valor = pila.pop();
        if (valor == viejo){
            pilaAux.push(nuevo);
        } else {
            pilaAux.push(valor);
        }
    }
    while (!pilaAux.esVacia()){
        pila.push(pilaAux.pop());
    }
}

void MostrarPila (Pila<int> &pila){
    Pila<int> pilaAux;
    while (!pila.esVacia()){
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    while (!pilaAux.esVacia()){
        pila.push(pilaAux.pop());
    }
}

int main() {

    cout << "Ejercicio N° 2" << endl;
    Pila<int> pila;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);

    cout << "Pila antes del reemplazo: "<<endl;
    MostrarPila(pila);

    cout << "La pila despues del reemplazo: "<<endl;
    Reemplazar(pila, 3, 1);
    MostrarPila(pila);
    return 0;
}
