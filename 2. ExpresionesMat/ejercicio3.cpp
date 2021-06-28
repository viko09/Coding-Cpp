//(a+b)/(c+d)
// Created by vikoluna on 2/20/21.
//
#include <iostream>

using namespace std;
int main(){
    float a, b, c, d, e;
    cout<<"Ingrese el valor de a: "<<endl; cin>>a;
    cout<<"Ingrese el valor de b: "<<endl; cin>>b;
    cout<<"Ingrese el valor de c: "<<endl; cin>>c;
    cout<<"Ingrese el valor de d: "<<endl; cin>>d;

    e = (a+b)/(c+d);
    cout.precision(5); //despues del punto decimal solo llega hasta 25 digitos
    cout<<"El resultado de la operación es: "<<e<<endl;

    return 0;
}
