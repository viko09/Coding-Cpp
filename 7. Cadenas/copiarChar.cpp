// Funcion strcpy();
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[] = "Vicolorido";
    char nameTwo[20], cadeNew[50], cadeCopy[50];

    strcpy(nameTwo, name); // Primero va la cadena a la que se va a copiar
    cout<<nameTwo<<endl;

    cout<<"----------------------------------------------------------------"<<endl;

    cout<<"Ingrese una cadena personalizada: ";
    cin.getline(cadeNew, 50, '\n');

    strcpy(cadeCopy, cadeNew);
    cout<<"La cadena es: "<<cadeCopy<<endl;


    getchar();
    return 0;
}