// Programa que determina el mayor de 3 numeros
// Created by vikoluna on 2/25/21.
//
# include "iostream"

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Ingrese los tres números consecutivamente: " << endl;
    cin >> n1 >> n2 >> n3;

    if (n1>n2 and n1>n3)
        cout<<"El mayor de todos los números es: "<<n1<<endl;
    else {
        if (n2 > n1 and n2 > n3)
            cout << "El mayor de todos los números es: " << n2 << endl;
        else {
            if (n1 == n2 and n1 == n3)
                cout << "Los números son iguales uwu" << endl;
            else {
                cout << "El mayor de todos los números es: " << n3 << endl;

            }
        }
    }
    return 0;
}
