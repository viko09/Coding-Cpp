//
// Created by vikoluna on 3/4/21.
//
#include "iostream"

using namespace std;

int main(){
    float t, prom, mayor=0, menor=999, suma=0;

    for(int i=0; i<24; i+=4) {
        cout << "Digite la temperatura de la hora " << i << ":00 "<<" : " << endl;
        cin >> t;

        suma += t;
        if (t > mayor) {
            mayor = t;
        }
        if(t<menor) {
            menor = t;
        }

    }
prom= suma/6;
    cout<<"Temperatura promedio: "<<prom<<endl;
    cout<<"Temperatura mas alta: "<<mayor<<endl;
    cout<<"Temperatura mas baja: "<<menor<<endl;

    getchar();
    return 0;
}
