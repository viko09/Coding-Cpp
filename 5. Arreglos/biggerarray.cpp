//
// Created by vikoluna on 4/10/21.
//
#include <iostream>

using namespace std;

int main(){
    int n, arreglo[100], mayor = 0;

    cout<<"Ingrese el número de elementos del arreglo: "<<endl;
    cin>>n;

    for (int i = 0; i<n; i++) {
        cout<<"Digite el elemento "<<i+1<<" del arreglo"<<endl;
        cin>>arreglo[i];

        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }

    cout<<"\n El mayor elemento del vector es: "<<mayor<<endl;

    getchar();
    return 0;
}
