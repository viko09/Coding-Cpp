//
// Created by vikoluna on 2/23/21.
//
# include <iostream>
# include <cmath> //Librería matemática

using namespace std;

int main(){
    double ca, co, hi;
    cout<<"Ingrese el cateto adyacente"<<endl; cin>>ca;
    cout<<"Ingrese el cateto opuesto"<<endl; cin>>co;
// Para usar exponentes ----> pow(variable, numero a elevar)
    hi = sqrt(pow(ca,2) + pow(co,2));

    cout.precision(3);
    cout<<"La hipotenusa es: "<<hi<<endl;
}
