#include <iostream>
#include "Pila/Pila.h"
using namespace std;

int main() {
    Pila<char> pila;
    char letra;
    cout << "Imgrese una palabra o frase (finalice con un punto)" << endl;
    do {
        cin.get(letra);
        if (letra != '.'){
            pila.push(letra);
        }
    } while (letra != '.');

    cout << "La palabra o frase invertida queda: " << endl; 
    while (!pila.esVacia()){
        cout << pila.pop();
    }
    return 0;
}
