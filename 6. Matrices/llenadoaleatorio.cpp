//
// Created by vikoluna on 4/15/21.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    float matrix[1000][1000], random, matriz[1000][1000];
    int n, m;

    cout<<"Ingrese el número de filas: "<<endl; cin>>n;
    cout<<"Ingrese el número de columnas: "<<endl; cin>>m;

    srand(time(NULL)); //Genera números aleatorios

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            random = 0+rand()%(2); //generar números aleatorios del 0 al 1
            matrix[i][j] = random;
        }
    }

    //copiar a otra matriz
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
