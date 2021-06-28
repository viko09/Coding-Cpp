// Transforma números enteros a romanos
// Created by vikoluna on 2/28/21.
//
#include <iostream>

using namespace std;

int main(){
    int numero, unidades, decenas, centenas, millares;

    cout<<"Ingresa el número: "<<endl; cin>>numero;

    unidades = numero%10; numero/=10;
    decenas  = numero%10; numero/=10;
    centenas = numero%10; numero/=10;
    millares = numero%10; numero/=10;

    switch (millares) {
        case 1: cout<<"M"; break;
        case 2: cout<<"MM";break;
        case 3: cout<<"MM";break;
        case 4: cout<<"MMMM";break;
    }
    switch (centenas) {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC";break;
        case 3: cout<<"CCC";break;
        case 4: cout<<"CD";break;case 5: cout<<"D";break;case 6: cout<<"DC";break;
        case 7: cout<<"DCC";break;case 8: cout<<"CCM";break;case 9: cout<<"CM";break;

    }
    switch (decenas) {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX";break;
        case 3: cout<<"XXX";break;
        case 4: cout<<"XL";break; case 5: cout<<"L";break;case 6: cout<<"LX";break;
        case 7: cout<<"LXX";break; case 8: cout<<"XXC";break; case 9: cout<<"XC";break;
    }

    switch (unidades) {
        case 1: cout<<"I"<<endl;break;
        case 2: cout<<"II"<<endl;break;
        case 3: cout<<"III"<<endl;break;
        case 4: cout<<"IV"<<endl;break;
        case 5: cout<<"V"<<endl;break;
        case 6: cout<<"VI"<<endl;break;
        case 7: cout<<"VII"<<endl;break;case 8: cout<<"IIX"<<endl;break; case 9: cout<<"IX"<<endl;break;
    }

    return 0;
}
