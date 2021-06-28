// Mejora
// Created by vikoluna on 2/28/21.
//
# include "iostream"

using namespace std;

int main(){
    float saldo = 1000, extra, total, retiro;
    int opc;

    cout<<"\tBienvenido Tiendas Vicolita :) "<<endl;
    cout<<"1. Deposita dinero a tu cuenta"<<endl;
    cout<<"2. Retirar dinero de tu cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione la opción: "<<endl;

    cin>>opc;

    switch (opc) {
        case 1:
            cout << "Ingrese la cantidad a depositar: ";
            cin >> extra;
            total = saldo + extra;
            cout << "Gracias.\n Tu saldo actual es de: " << total << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retiro;
            if (retiro > saldo)
                cout << "No tienes suficiente saldo, ingresa otra cantidad."<<endl;
            else {
                total = saldo - retiro;
                cout << "Gracias.\n Tu saldo actual es de: " << total << endl;
                break;
            }
        case 3:
            cout << "Gracias por su preferencia.\nVuelva pronto :)" << endl; break;
        default:
            cout << "No se reconoce la acción, vuelva a intentarlo."<<endl;
    }
    return 0;
}
