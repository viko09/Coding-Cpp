// Programa que dice si un numero es par o impar
// Created by vikoluna on 2/25/21.
//

#include <iostream>

using namespace std;

int main(){
    int n1;

    cout<<"Digite un número: "<<endl; cin>>n1;

    if (n1==0)
        cout<<"El numero es cero :("<<endl;
    else{
        if (n1%2 == 0)
            cout<<"El numero es par :)"<<endl;
        else{
            cout<<"El número es impar :D"<<endl;
        }
    }
    return 0;
}
