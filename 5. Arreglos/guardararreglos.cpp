// Guarda números en un arreglo e imprímelo
// Created by vikoluna on 3/28/21.
//
#include <iostream>

using namespace std;

int main(){
    float array[100];
    int n;

    cout<<"Ingrese el número de elementos del arreglo: "<<endl; cin>>n;

    for (int i = 0; i <= n; i++){
        cout<<"Digite el "<<i<<" elemento: "<<endl;
        cin>>array[i]; //Guardando los elementos
    }
// Ahora mostrando los elementos se tiene que
    for (int i = 0; i <= n; i++){
        cout<<"La posición "<<i<<" corresponde al elemento: "<<array[i]<<endl;
    }

    return 0;
}
