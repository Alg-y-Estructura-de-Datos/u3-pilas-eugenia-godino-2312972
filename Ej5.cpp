#include <iostream>
#include "Pila/Pila.h"
using namespace std;

int sumarNro (Pila<int> &pila, int n){
    Pila<int> pilaAux; 
    while (!pila.esVacia()){
        int valor = pila.pop();
        pilaAux.push(valor + n);
    }
    while (!pila.esVacia()){
        pila.push(pilaAux.pop());
    }

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
    int num, n;
    cout << "Ingrese numeros enteros (ingrese -1 cuando termine)" << endl;
    do {
        cin >> num;
        if (num != -1){
            pila.push(num);
        }
    } while (num != -1);

    cout << "Imgrese un numero entero 'n': "<<endl;
    cin >> n;
    cout << "La pila oriinal: " << endl;
    MostrarPila(pila);

    sumarNro(pila, n);
    cout << "La pila con la suma del numero 'n' es: "<< endl;
    MostrarPila(pila);
}
