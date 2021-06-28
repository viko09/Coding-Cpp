// Programa que entre precio y salga el precio + IVA
// Created by vikoluna on 2/20/21.
//
#include <iostream>
using namespace std;

int main() {
    float precio, piva, iva;
    cout << "Ingrese el precio del producto: " << endl;
    cin >> precio;

    iva = 0.16;
    piva = (precio * iva) + precio;
    cout<<"El precio total del producto es: "<<piva<<endl;

    return 0;
}
