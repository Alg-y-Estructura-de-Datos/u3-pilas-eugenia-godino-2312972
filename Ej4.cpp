#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void suma (Pila<int> &pila, int n){

}

void MostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}
int main (){
    Pila<int> pila;
    int n, num; 
    cout << "Ingrese valores enteros, ingrese -1 para terminar" << endl; 
    do {
        cin >> num;
        if (num != -1){
            pila.push(num);
        }
    } while (num != -1);

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "La pila es: "<<endl; 
    MostrarPila(pila);
}
