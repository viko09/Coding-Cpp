// Resuelve ecuaciones cuadráticas de la forma ax^2 + bx + c con la chicharronera
// Created by vikoluna on 2/23/21.
//
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double a, b, c;
    double x_1, x_2;

    cout<<"Ingrese el valor de a: "<<endl; cin>>a;
    cout<<"Ingrese el valor de b: "<<endl; cin>>b;
    cout<<"Ingrese el valor de c: "<<endl; cin>>c;

    x_1 = ((-b)+sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    x_2 = ((-b)-sqrt((pow(b,2)) - (4*a*c)))/(2*a);

    cout<<"Los resultados de la ecuación cuadrática son: "<<endl;
    cout<<"x_1 = "<<x_1<<endl;
    cout<<"x_2 = "<<x_2<<endl;

    return 0;
}
