// Suma 1+3+5+...+2n+1
// Created by vikoluna on 3/13/21.
//

#include <iostream>

using namespace std;

int main(){
    int n, suma=0;

    cout<<"Ingrese el valor de el 'n-esimo' elemento a calcular: "<<endl; cin>>n;

    for (int i=1; i <= 2*n-1; i+=2){
        suma+=i;
    }

    cout<<"El resultado es: "<<suma<<endl;
    return 0;
}
