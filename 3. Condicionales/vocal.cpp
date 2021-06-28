// Entra char y determina si es vocal minuscula o no
// Created by vikoluna on 2/25/21.
//
#include <iostream>

using namespace std;

int main() {
    char lt;

    cout<<"Ingrese su vocal"<<endl;
    cin>>lt;

    switch (lt) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minúscula"<<endl;
            break;//no se pone break en todas por que todas son las que se van a analisar
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayúscula"<<endl;
            break;
        default: cout<<"No es una vocal"<<endl; break;
    }

    return 0;
}
