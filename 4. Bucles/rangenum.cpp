//
// Created by vikoluna on 3/4/21.
//
#include "iostream"

using namespace std;

int main(){
    float nu, suma = 0;

    do{
    cout<<"Ingrese un número: "<<endl; cin>>nu;
        if (nu>0) {
            suma += nu;
        }
    }while( ((nu<20) || (nu>30) && (nu != 0)));

    cout<<"La suma es: "<<suma<<endl;

    return 0;
}
