//
// Created by vikoluna on 2/28/21.
//
#include "iostream"

using namespace std;

int main(){
    float nn, i = 0;

    do {
        cout<<"Ingresa un número: "<<endl; cin>>nn;

        if (nn > 0)
            i++;
    } while (nn != 0);

    cout<<"Los numeros son: "<<endl<<i<<endl;

    getchar();
    return 0;
}