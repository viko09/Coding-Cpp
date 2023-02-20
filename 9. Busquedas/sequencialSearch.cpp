// Búsqueda secuencial

#include "iostream"

using namespace std;

int main(){
    // El arreglo no necesariamente debe estar ordenado
    int a[] = {3, 4, 5, 6, 6};
    int i, dato;
    char flag = 'F';
    dato = 6;
    // Busqueda sequencial
    i = 0;
    while ((flag == 'F') and (i < 4)){
        if (a[i] == dato){
            flag = 'T';
        }
        i++;
    }

    if (flag == 'F'){
        cout << "The number does not exist" << endl;
    } else if (flag == 'T'){
        cout << "The number was found on position: " << i -1 << endl;
    }

    getchar();
    return 0;
}
