// Rango de edad de 18-25
// Created by vikoluna on 2/25/21.
//
#include <iostream>

using namespace std;

int main(){
    int edad;
    cout<<"Escribe tu edad: "<<endl; cin>>edad;

    if (edad>18 and edad<25)
        cout<<"Estas entre 18 y 25 años"<<endl;
    else{
        cout<<"No cumples con la edad :("<<endl;
    }
    return 0;
}
