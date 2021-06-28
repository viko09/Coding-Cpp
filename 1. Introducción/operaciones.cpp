// Programa que realiza suma, resta, multiplicación y división de dos datos
// Created by vikoluna on 2/20/21.
//

#include<iostream> //libreria estandar

using namespace std;
int main(){
    float variable1;
    float variable2;

    cout<<"Introduzca el primer número: "<<endl;
    cin>>variable1;

    cout<<"Introduzca el segundo número: "<<endl;
    cin>>variable2;

    cout<<"\nLas variables que introdujo son: "<<variable1<<" y "<<variable2<<endl;
//Adición
    cout<<"\nLa suma de sus variables es: "<<variable1+variable2<<endl;
//Sustracción
    cout<<"La resta de sus variables es: "<<variable1-variable2<<endl;
//Multiplicación
    cout<<"La multiplicación de sus variables es: "<<variable1*variable2<<endl;
//División
    cout<<"La división de sus variables es: "<<variable1/variable2<<endl;

    cout<<"------------------------------------------------"<<endl;

//También se puede escribir de la siguiente forma (como en el curso)
    int n1, n2, adicion=0, sustraccion=0, multiplicacion=0, division=0;

    cout<<"Escriba el entero A: "<<endl; cin>>n1;
    cout<<"Escriba el entero B: "<<endl; cin>>n2;

    adicion = n1 + n2;
    sustraccion = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"\nLa suma es: "<<adicion<<endl;
    cout<<"La resta es: "<<sustraccion<<endl;
    cout<<"La multiplicación es: "<<multiplicacion<<endl;
    cout<<"La división es: "<<division<<endl;
}
