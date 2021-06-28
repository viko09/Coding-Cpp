//
// Created by vikoluna on 4/11/21.
//
#include <iostream>

using namespace std;

int main() {
    float array[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite el " << i + 1 << " elemento: " << endl;
        cin >> array[i]; //Guardando los elementos
    }

    for (int i = 0; i < 5; ++i) {
        array[i] = 2* array[i];
    }

    for (int i = 0; i < 5; ++i) {
        cout<<"El elemento "<<i+1<<" es ahora el número "<<array[i]<<endl;
    }

    return 0;
}