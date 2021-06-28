//(a/b)+1
// Created by vikoluna on 2/20/21.
//
#include <iostream>

using namespace std;
int main(){
    float a, b, resultado;

    cout<<"¡Hola!"<<endl; cout<<"Digite el valor de a: "<<endl; cin>>a;
    cout<<"Digite el valor de b: "<<endl; cin>>b;

    resultado = (a/b)+1;
    cout.precision(3); //esta linea es para establecer el número de decimales

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}
