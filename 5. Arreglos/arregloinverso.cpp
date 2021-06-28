//
// Created by vikoluna on 3/28/21.
//
#include <iostream>

using namespace std;

int main(){
    float array[6] = {1, 2, 3, 3.14159, 2*2, 8};

// Ahora mostrando los elementos se tiene que
    for (int i = 5; i >= array[6]; i--){
        cout<<"La posición "<<i<<" corresponde al elemento: "<<array[i]<<endl;
    }

    return 0;
}

