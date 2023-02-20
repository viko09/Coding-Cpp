// Tablas de multiplicar
// Created by vikoluna on 2/28/21.
#include "iostream"
using namespace std;

int main(){
    int n1;
    do {
        cout<<"Ingresa el número: "<<endl;
        cin>>n1;
    } while ((n1 < 1) or (n1 > 10));

    for (int i = 1; i <= 20 ; ++i) {
        cout<<n1<<" x "<<i<<" = "<<n1*i<<endl;
    }
    return 0;
}