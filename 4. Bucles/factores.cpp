//
// Created by vikoluna on 3/28/21.
//
#include "iostream"

using namespace std;

int main(){
    int n;
    cout<<"Ingresa tu número"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++){
        if (n % i == 0) {
            cout << "El numero " << i << " es factor de " << n << endl;
        }
    }

    return 0;
}
