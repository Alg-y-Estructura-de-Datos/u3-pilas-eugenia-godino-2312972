#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void Ocurrencia (Pila<int> &pila, int valor){
    Pila<int> pilaAux;
    bool encontrado = false;
    int cont = 0;
    while (!pila.esVacia()){
        int num = pila.pop();
        if (num == valor){
             if (!encontrado){
            encontrado = true;
            pilaAux.push(num);
        } 
            cont++;
        } else {
            pilaAux.push(num);
        }
    }
    
    while (!pilaAux.esVacia()) {
        int aux;
        aux = pilaAux.pop();
        if(encontrado && cont ==1 && aux == valor ){

        }else{
            pila.push(aux);
        }
    }
}

void MostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    // Desapilar elementos para mostrar sin perderlos
    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}

int main() {

    cout << "Ejercicio N° 3" << endl;
    Pila<int> pila;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);
    cout << "La pila antes de modificarla: " << endl;    
    MostrarPila(pila);
    return 0;
}
