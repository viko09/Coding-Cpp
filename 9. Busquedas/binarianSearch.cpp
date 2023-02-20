// Busqueda Binaria

# include "iostream"

using namespace std;

int main(){
    // El arreglo debe estar ordenado de forma ascendente
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int inf, sup, mitad, dato;
    char band = 'F';

    dato = 4;

    // Algoritmo Busqueda Binaria
    inf = 0;
    sup = 5;

    while (inf <= sup){
        mitad = (inf + sup)/2;

        if (data[mitad] == dato){
            band = 'V';
            break;
        }
        if (data[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if (data[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }
    }

    if (band == 'V'){
        cout << "El número ha sido encontrado en la posición " << mitad << endl;
    } else {
        cout << "El número no ha sido encontrado." << endl;
    }
    getchar();
    return 0;
}