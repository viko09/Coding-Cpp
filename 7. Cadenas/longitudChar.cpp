// Funcion strlen();
#include "iostream"
#include "string.h"

using namespace std;

int main(){
    char numeroLong[30];
    int longi;

    cout<<"Digite una cadena de caracteres: "<<endl;
    cin.getline(numeroLong, 30, '\n');

    do{
        cout<<"Vuelva a ingresar la cadena."<<endl;
        cout<<"Digite una cadena de caracteres: "<<endl;
        cin.getline(numeroLong, 30, '\n');
        longi = strlen(numeroLong);
    } while (longi < 10);

    if (longi > 10){
        cout<<"La cadena que escribiste es: "<<numeroLong<<endl;
        cout<<"La cadena se ha registrado con éxito prro."<<endl;
    }
getchar();
    return 0;
}