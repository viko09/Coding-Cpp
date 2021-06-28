//
// Created by vikoluna on 3/28/21.
// variable = limit inf + rand() % (limit sup + 1 - lim inf);
#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;

int main(){
    int n, dato, contador=0;

    cout<<"Hola, a que no adivinas mi número.\n";

            srand(time(NULL)); //genera un número aleatorio

    dato = 1 + rand() % (100); //Dato aleatorio parametrizado

    do {
        cout << "Por favor, ingresa un número entre el 1 y 100: " << endl;
        cin >> n;

        if (n < dato) {
            cout << "NO!! Digita un número mayor"<<endl;
        }
        if (n > dato) {
            cout << "NO!! Digita un número menor"<<endl;
        }
        contador++;
    } while (n != dato);

    cout<<"Lo has adivinado :)"<<endl;
    cout<<"Te tomó: "<<contador<<" intentos."<<endl;
    cout<<"Prueba1"
    return 0;
}
