//
// Created by vikoluna on 2/23/21.
//
# include <iostream>

using namespace std;
int main(){
    float c1, c2, c3, c4, p, n;
    cout<<"Ingrese el número de alumnos"<<endl; cin>>n;
    cout<<"Ingrese la primera calificación: "<<endl; cin>>c1;
    cout<<"Ingrese la segunda calificación: "<<endl; cin>>c2;
    cout<<"Ingrese la tercera calificación: "<<endl; cin>>c3;
    cout<<"Ingrese la cuarta calificación: "<<endl; cin>>c4;

    p = (c1+c2+c3+c4)/n;

    cout<<"Calificación promedio: "<<p<<endl;

    return 0;
}
