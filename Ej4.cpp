#include <iostream>
#include "Pila/Pila.h"
using namespace std;

int suma (Pila<int> &pila, int n){
    Pila<int> pilaAux;
    bool encontrado = false;
    int suma = 0;
    while (!pila.esVacia()){
        int valor = pila.pop();
        if (valor == n){
            encontrado = true;
            pilaAux.push(valor);
        } else {
            suma += valor;
            pilaAux.push(valor);
        }
    }

    while (!pilaAux.esVacia()){
        pila.push(pilaAux.pop());
    }

    if (!encontrado){
        int sumaTotal = 0;
        while (!pila.esVacia()){
            sumaTotal += pila.pop();
        }
        while (!pilaAux.esVacia()){
            pila.push(pilaAux.pop());
        }
        return sumaTotal;
    }
    return suma;
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
    cout<< "La suma de los elementos es: "<<suma(pila, n);
    return 0;
}
