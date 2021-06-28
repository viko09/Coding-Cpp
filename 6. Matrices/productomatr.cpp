//
// Created by vikoluna on 4/15/21.
//
# include "iostream"

using namespace std;

int main(){
    float matrix[3][3], matriz[3][3], prod[3][3];

    cout<<"Ingrese la matriz A: "<<endl;
    cout<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> matrix[i][j]; //Guardando los elementos
        }
    }
    cout<<endl;

    // Mostrar la matríz
    cout<<"La matríz que introdujiste es: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<" "<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<endl;

    cout<<"Ingrese la matriz B: "<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> matriz[i][j]; //Guardando los elementos
        }
    }
    cout<<endl;

    // Mostrar la matríz
    cout<<"La matríz que introdujiste es: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"------------------------------------------------"<<endl;

    cout<<"El producto de A·B es: "<<endl;
//Multiplicación de renglon por columna
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            prod[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                prod[i][j] += matrix[i][k] * matriz[k][j];
            }
        }
    }
    // Mostrar la matríz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << prod[i][j] << " ";
        }
        cout << "\n";
    }

    getchar_unlocked();
    return 0;
}
