//
// Created by vikoluna on 4/11/21.
//
#include <iostream>

using namespace std;

int main(){
    int ar1[6] = {1, 34, 95, 53, 7, 190}, n = 0, suma = 0;

    for (int i = 0; i<6;++i) {
        suma += ar1[i];

        if(ar1[i] > n) {
            n = ar1[i];
        }

    }

    if(n == suma - n){
        cout<<"El número "<<n<<" es la suma de los demas"<<endl;
    } else{
        cout<<"No existe número que sea igual a la suma de los demás"<<endl;
    }

    cout<<"Presiona una tecla para finalizar";
    getchar_unlocked();
    return 0;
}
