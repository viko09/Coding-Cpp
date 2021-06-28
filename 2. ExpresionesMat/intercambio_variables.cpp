//
// Created by vikoluna on 2/22/21.
//
#include <iostream>
using namespace std;

int main(){
    int x, y, aux;
    cout<<"Digite el valor de x: "<<endl; cin>>x;
    cout<<"Digite el valor de y: "<<endl; cin>>y;

    aux = x; //aux toma el valor de x
    x = y; //x toma el valor de y
    y = aux; // y toma el valor de aux que tenia el primer valor de x

    cout<<"Los resultados son\n"<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    return 0;
}
