//
// Created by vikoluna on 2/28/21.
//
#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;

    cout<<"Ingrese los tres números consecutivamente: "<<endl;
    cin>>n1>>n2>>n3;

    cout<<"Ingrese el número a analizar: "<<endl;
    cin>>n4;

    if (n1 == n4 or n2 == n4 || n3 == n4)
        cout<<"El numero coincide con alguno de los tres números"<<endl;
    else{
        cout<<"El numero no coincide con ninguno"<<endl;
    }

    return 0;
}
