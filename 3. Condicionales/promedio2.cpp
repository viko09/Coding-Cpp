//
// Created by vikoluna on 2/23/21.
//
#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, s;
    cout<<"Ingrese la nota de practicas: "<<endl; cin>>n1;
    cout<<"Ingrese la nota teórica: "<<endl; cin>>n2;
    cout<<"Ingrese la nota de participación: "<<endl; cin>>n3;

    s = (n1 + n2 + n3);

    cout<<"Calificación : "<<s<<endl;

    if (s<60)
        cout<<"REPROBADO :("<<endl;
    else if (s>60)
        cout<<"APROBADO :)"<<endl;
    return 0;
}
