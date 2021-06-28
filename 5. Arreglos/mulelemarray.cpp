// Definimos un vector o arreglo y multiplicamos sus elementos
// Created by vikoluna on 3/28/21.
//
#include <iostream>

using namespace std;

int main(){
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    double mult = 1;

    for (int i = 0; i < 10; i++){
        mult *= array[i];
    }

    cout<<"La multiplicación de los factores de 2 hasta 10 es: "<<mult<<endl;

    return 0;
}
