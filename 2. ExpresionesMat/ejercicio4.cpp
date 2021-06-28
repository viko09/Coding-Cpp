//Escribir la siguiente expresión: (a+(b/c))/(d+(e/f))
// Created by vikoluna on 2/20/21.
//
#include <iostream>

using namespace std;
int main(){
    float a,b,c,d,e,f;
    double g;

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;
    cout<<"Digite el valor de d: \n"; cin>>d;
    cout<<"Digite el valor de e: \n"; cin>>e;
    cout<<"Digite el valor de f: \n"; cin>>f;

    g = (a+(b/c))/(d+(e/f));

    cout<<"El resultado de la expresión es el siguiente: "<<g<<endl;
    return 0;
}
