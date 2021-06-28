//
// Created by vikoluna on 4/15/21.
//
# include "iostream"

using namespace std;

int main() {
    float matrix[3][3], matriz[3][3], matriche[3][3];

    cout << "Suma de dos matrices de 3X3: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> matrix[i][j]; //Guardando los elementos
        }
    }
    cout << endl;

    // Mostrar la matríz
    cout << "La matríz A que introdujiste es: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout<<"------------------------------------------------"<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> matriz[i][j]; //Guardando los elementos
        }
    }
    cout << endl;

    // Mostrar la matríz
    cout << "La matríz B que introdujiste es: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout<<"------------------------------------------------"<<endl;

    cout<<"La suma de A+B es: "<<endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriche[i][j] = matrix[i][j] + matriz[i][j];
        }
    }
    // Mostrar la matríz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << matriche[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
