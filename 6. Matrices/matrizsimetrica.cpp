//
// Created by vikoluna on 4/15/21.
//
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int matriz[1000][1000];
    char band;
// m fila - , n columnas |

    cout << "Ingresa el número de filas: " << endl;
    cin >> n;
    cout << "Ingresa el número de columnas: " << endl;
    cin >> m;

    cout << endl;

    if (n == m) {
        cout << "Ingrese los valores de la matriz A: " << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
                cin >> matriz[i][j]; //Guardando los elementos
            }
        }
        cout << endl;

        // Mostrar la matríz
        cout << "La matríz que introdujiste es: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << " " << matriz[i][j] << " ";
            }
            cout << "\n";
        }
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (matriz[j][i] != matriz[i][j]) {
                        band = 'F';
                    } else {
                        if (band == 'F') {
                            cout << "La matríz no es simétrica" << endl;
                        } else {
                            cout << "La matriz es transpuesta, es simetrica" << endl;
                        }
                    }
                }
            }
    } else {
        cout << "La matriz debe ser cuadrada." << endl;
    }
    return 0;
}
