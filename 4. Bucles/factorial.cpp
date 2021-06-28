//
// Created by vikoluna on 3/14/21.
//

#include <iostream>

using namespace std;

int main(){
    int n, fac = 1;
    cout<<"Ingrese el número 'n': "<<endl; cin>>n;

    for (int i=1; i <= n; i++){
        fac *= i;
    }

    cout<<"El factorial de "<<n<<" es: "<<fac<<endl;

    return 0;
}
