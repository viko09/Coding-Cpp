// Programa que lee dos numeros y que determina cual es mayor
// Created by vikoluna on 2/25/21.
//

# include "iostream"

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer y segundo número: " << endl;
    cin >> numero1 >> numero2;

    if (numero1 == numero2)
        cout << "El numero es el mismo bro :) BSOS" << endl;
    else {
        if (numero1 > numero2)
            cout << "El numero " << numero1 << " es mayor que " << numero2 << endl;
        else if (numero2 > numero1)
            cout << "El numero " << numero2 << " es mayor que " << numero1 << endl;
        return 0;
    }
}
