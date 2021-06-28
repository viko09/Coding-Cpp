// Metodo Inserción

#include "iostream"

using namespace std;

int main(){
    int num[] = {4, 3 ,7, 6, 9, 1};
    int position, aux;

    cout<<"Desordenado: ";
    for (int i = 0; i < 6; ++i) {
        cout<<num[i]<<" ";
    }

    for (int i = 0; i < 6; ++i) {
        position = i;
        aux = num[i];

        while ((position > 0) && (num[position - 1] > aux)){
            num[position] = num[position - 1];
            position--;
        }
        num[position] = aux;
    }

    cout<<endl<<"Ordenado Asendente: ";
    for (int i = 0; i < 6; ++i) {
        cout<<num[i]<<" ";
    }

    cout<<endl<<"Highest to Lowest: ";
    for (int i = 5; i >= 0; --i) {
        cout<<num[i]<<" ";
    }


    cout<<endl<<endl<<"Press enter to continue...";
    getchar();
    return 0;
}
