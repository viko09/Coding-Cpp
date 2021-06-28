# include <iostream>

using namespace std;

int main(){
    float numeros[1000][1000];
    int n, m;

    cout<<"Ingrese el número de filas: "<<endl; cin>>n;
    cout<<"Ingrese el número de columnas: "<<endl; cin>>m;

    cout<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Digite el [" << i + 1 << "][" << j + 1 << "] elemento: " << endl;
            cin >> numeros[i][j]; //Guardando los elementos
        }
    }
    cout<<endl;

    // Mostrar la matríz
    cout<<"La matríz que introdujiste es: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<" "<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

    getchar_unlocked();
    return 0;
}
