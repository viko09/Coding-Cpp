//
// Created by vikoluna on 2/28/21.
//
#include "iostream"
#include "cmath"

using namespace std;

int main(){
    int opc, n1;
    float num, expo, total;

    cout<<"\tBienvenido a la app de Viko :)\n ¿Qué quieres hacer? "<<endl;
    cout<<"1. Calcular a^n"<<endl;
    cout<<"2. Calcular si un número es par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione la opción: "<<endl;

    cin>>opc;

    switch (opc) {
        case 1:
            cout<<"Ingresa el número bro\n";
            cin>>num;
            cout<<"Ingresa a cuanto lo vas a elevar: ";
            cin>>expo;
            total = pow(num, expo);
            cout<<"Aqui tienes krnal, todo tuyo: "<<total<<endl; break;
        case 2:
            cout<<"Digite un número: "<<endl; cin>>n1;

            if (n1==0)
                cout<<"El numero es cero :("<<endl;
            else{
                if (n1%2 == 0)
                    cout<<"El numero es par :)"<<endl;
                else{
                    cout<<"El número es impar :D"<<endl;
                }
            } break;
        case 3:
            cout<<"Gracias, vuelve pronto."<<endl; break;
        default:
            cout<<"Reinicia esto que no se reconoce el numero xd"<<endl;
    }

    return 0;
}
