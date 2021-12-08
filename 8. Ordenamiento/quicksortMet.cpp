// Método QuickSort

# include "iostream"

using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int first, int last){
    int i, j, central;
    float pivot;

    central = (first + last)/2;
    pivot = a[central];
    i = first;
    j = last;

    do {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (first < j){
        quickSort(a, first, j); // Ordenamos la sublista izquierda
    }
    if (i < last){
        quickSort(a, i, last); // Ordenamos la sublista derecha
    }
}

int main(){
    float arreglo[] = {1, 5, 6, 7, 3, 2, 0, 6, 7, 13};
    quickSort(arreglo, 0, 9);

    cout << "Arreglo Ordenado - Forma Asendente" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << arreglo[i] << ' ';
    }
    cout << endl;

    cout << "Arreglo Ordenado - Forma Descendente" << endl;
    for (int i = 9; i >= 0; --i) {
        cout << arreglo[i] << ' ';
    }

    cout << endl;
    cout << "Presione enter para continuar...";

    getchar();
    return 0;
}
