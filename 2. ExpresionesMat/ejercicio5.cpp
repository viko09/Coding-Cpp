//Dar el valor resultante de la siguiente expresión: a+(b/(c-d)) con c-d dif a cero
// Created by vikoluna on 2/20/21.
//
#include <iostream>

using namespace std;
int main(){
    float a,b,c,d;
    double e;

    cout<<"Digite el valor de a: \n"; cin>>a;
    cout<<"Digite el valor de b: \n"; cin>>b;
    cout<<"Digite el valor de c: \n"; cin>>c;
    cout<<"Digite el valor de d: \n"; cin>>d;

    e = a+(b/(c-d));

    cout<<"El resultado de la expresión es el siguiente: "<<e<<endl;
    return 0;
}
