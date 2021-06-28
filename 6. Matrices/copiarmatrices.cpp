//
// Created by vikoluna on 4/15/21.
//
#include<iostream>

using namespace std;

int main(){
    int matrix[2][2], matriz[2][2];
    int n = 2, m = 2;

    cout<<"Introduce los elementos de tu matríz de 2x2";
    cout<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> matrix[i][j]; //Guardando los elementos
            }
        }
    cout<<endl;

    // Mostrar la matríz
    cout<<"La matríz que introdujiste es: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<" "<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n"; //Ahora copiar la matriz
    cout<<"La matríz copiada es: "<<endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matriz[i][j] = matrix[i][j];
        }
    }

    // Mostrar la nueva matríz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    getchar_unlocked();
    return 0;
}
