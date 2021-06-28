// r = \sqrt{x}/(y^2 -1)
// Created by vikoluna on 2/23/21.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x, y, r;
    cout<<"Ingrese el valor de x: "<<endl; cin>>x;
    cout<<"Ingrese el valor de y: "<<endl; cin>>y;

    r = (sqrt(x))/(pow(y, 2) - 1);

    cout<<"El resultado de f(x) es: "<<r<<endl;

    return 0;
}
