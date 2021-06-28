// Método burbuja

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1, 3, 1, 64, 4, 5, 8};
    int num;

    // Algorithm
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (numeros[j] > numeros[j+1]){
                num = numeros[j];
                        numeros[j] = numeros[j+1];
                        numeros[j+1] = num;
            }
        }
    }

    cout<<"El arreglo que introdujiste es: "<<endl;
    for (int j = 1; j < 8; j++){
            cout<<" "<<numeros[j]<<" ";
        }
        cout<<"\n";

    cout<<"Orden Asendente: "<<endl;
    for (int i = 0; i < 7; ++i) {
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden Descendente: "<<endl;
    for (int i = 7; i >= 0 ; --i) {
        cout<<numeros[i]<<" ";
    }
cout<<"\nPulsa cualquier tecla para continuar... "<<endl;
    getchar();
    return 0;
}