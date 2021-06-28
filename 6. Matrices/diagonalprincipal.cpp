#include "iostream"

using namespace std;

int main(){
    float numeros[3][3] = {{1, 1, 0},
                           {1, 0, 1},
                           {0, 1, 1}};
    //Mostrando la matriz completa
    cout<<"La matríz que está definida es: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<" "<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

/* Esto es lo que yo hice y no esta bien pero tampoco esta mal
 *     for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 1; ++j) {
            cout << numeros[i][j] << " ";
            }
        }
    for (int i = 1; i < 2; ++i) {
        for (int j = 1; j < 2; ++j) {
            cout << numeros[i][j] << " ";
        }
    }

    for (int i = 2; i < 3; ++i) {
        for (int j = 2; j < 3; ++j) {
            cout << numeros[i][j] << " ";
        }
    }

 */

// Aqui esta el otro resultado
cout<<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i==j){
                cout<<numeros[i][j]<< endl;
            }
        }
    }


    getchar_unlocked();
    return 0;
}
