//
// Created by vikoluna on 2/20/21.
//
#include <iostream>
using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;

    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;

    cout<<"Ingrese su sexo: "<<endl;
    cin>>sexo;

    cout<<"Ingrese su altura: "<<endl;
    cin>>altura;

    cout<<"\n-----------------------------------------------------\n";
    cout<<"\nSus datos son: \nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nAltura: "<<altura<<endl;

    return 0;
}
