// Metodo Ordenamiento Shell

# include "iostream"

using namespace std;

void change(float & x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[], int n){
    int jump, i, j, k;
    jump = n/2;

    while(jump > 0){
        for (i = jump; i < n; ++i) {
            j = i - jump;
            while (j >= 0){
                k = j + jump;
                if (a[j] <= a[k]){ // Par de elementos ordenados
                    j = -1;
                } else{ // Par de elementos desordenados
                    change(a[j], a[k]);
                    j -= jump;
                }

            }
        }
        jump /= 2;
    }
}

int main() {
    float arreglo[] = {4, 6, 8, 5, 7, 8, 54, 67, 78, 8, 57, 46, 43, 32, 67, 74, 105, 33, 1, 0};
    ordenacionShell(arreglo, 20);

    cout << "Arreglo Ordenado - Forma asendente: " << endl;
    for (int i = 0; i < 20; ++i) {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    cout << "Arreglo Ordenado - Forma descendente: " << endl;
    for (int i = 19; i >= 0; --i) {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    getchar();
    return 0;
}
