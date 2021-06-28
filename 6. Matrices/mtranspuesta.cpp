//
// Created by vikoluna on 4/15/21.
//
# include "iostream"

using namespace std;

int main(){
    float numeros[3][3];

    cout<<"Crea tu matriz transpuesta de 3X3: "<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> numeros[i][j]; //Guardando los elementos
        }
    }
    cout<<endl;

    // Mostrar la matríz
    cout<<"La matríz que introdujiste es: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<" "<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<endl;
    // Mostrar la matríz transpuesta
    cout<<"La transpuesta de la matriz es: "<<endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<" "<<numeros[j][i]<<" ";
        }
        cout<<"\n";
    }

    getchar_unlocked();

    return 0;
}
