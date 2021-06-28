// Ordenamiento por selección
#include "iostream"

using namespace std;

int main(){
    int numeros[] = {3, 56, 7, 43, 53 ,467 ,56, 67, 4, 65};
    int aux, min;

    cout<<"Desordenado: ";
    for (int i = 0; i < 10; ++i) {
        cout<<numeros[i]<<" ";
    }

    for (int i = 0; i < 10; ++i) {
        min = i;
        for (int j = i+1; j < 10; ++j) {
            if (numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<endl<<"Lowest to Highest: ";
    for (int i = 0; i < 10; ++i) {
        cout<<numeros[i]<<" ";
    }

    cout<<endl<<"Highest to Lowest: ";
    for (int i = 9; i >= 0; --i) {
        cout<<numeros[i]<<" ";
    }


    cout<<endl<<endl<<"Press enter to continue...";

    getchar();
    return 0;
}