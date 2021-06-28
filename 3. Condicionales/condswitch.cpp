//
// Created by vikoluna on 2/25/21.
//
#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Ingrese un número entre 1 y 5: "<<endl; cin>>numero;

    switch(numero){
        case 1: cout<<"Caso: 1"<<endl; break;
        case 2: cout<<"Caso: 2"<<endl; break;
        case 3: cout<<"Caso: 3"<<endl; break;
        case 4: cout<<"Caso: 4"<<endl; break;
        case 5: cout<<"Caso: 5"<<endl; break;
        default: cout<<"No es ningun numero del 1 al 5"<<endl; break;
    }

    return 0;
}
