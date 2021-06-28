// Definimos un vector o arreglo y sumamos sus elementos
// Created by vikoluna on 3/28/21.
//

#include <iostream>

using namespace std;

int main(){
    int arreglo[] = {1, 3, 5, 7};
    int suma = 0;

    for(int i = 0; i < 4; i++){
        suma += arreglo[i];
    }

    cout<<"La suma de los números primos menores que 10 es: "<<suma<<endl;

    getchar();
    return 0;
}
