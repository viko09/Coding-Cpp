// Suma 1+2+3+...+n
// Created by vikoluna on 3/13/21.
//

#include <iostream>

using namespace std;

int main(){
    int n, suma=0;
    cout<<"Ingrese el valor de 'n': "<<endl; cin>>n;

    for (int i=1; i<=n; i++){
        suma +=i;
    }
    cout<<"El resultado es: "<<suma<<endl;
    return 0;
}
