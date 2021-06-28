//
// Created by vikoluna on 4/11/21.
//
#include "iostream"

using namespace std;

int main(){
    char letras[] = {'v', 'i','c', 't', 'o', 'r'};
    char numeros[] = {'l', 'u','n', 'a'};

    char arreglo[11];

// Copiar los elementos de los arreglos a solo uno

    for (int i = 0; i < 6; ++i) {
        arreglo[i] = letras[i];
    }

    for (int i = 7; i < 11; ++i) {
        arreglo[i] = numeros[i - 7];
    }

    cout<<"El vector es: "<<endl;
    for (int i = 0; i < 11; ++i) {
        cout<<arreglo[i]<<endl;
    }

    getchar_unlocked();
    return 0;
}
