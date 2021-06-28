//
// Created by vikoluna on 4/16/21.
//
# include "iostream"
# include "string.h" // Libreria estandar de cadenas de caracteres

using namespace std;

int main(){
    // Definimos el nombre de la cadena y entre corchetes el numero de elementos
    char strng[] = "Victor";
    char wordone[] = {'V', 'i', 'k', 'o'};
    char name[20];

    cout<<strng<<endl;
    cout<<wordone<<endl;
    cout<<"Digite su nombre: "<<endl;
    // cin>>name; No se deberia usar por que no guarda si se usa un espacio
    //gets(name);

/*el gets tampoco es muy bueno para guardar texto, guarda mas espacio del que se le da
     * utiliza memoria de mas que no es bueno para un programa
    */

    cin.getline(name, 20, '\n');
    cout<<name<<endl;

    // Ahora para saber la longitud de una cadena podemos usar la función strlen()
    char wordchida[] = "Ola, que ase";
    int longi = 0;

    cout<<"La nueva cadena ahora es: "<<wordchida<<endl;
    longi = strlen(wordchida);
    cout<<"Los elementos de la cadena son: "<<longi<<endl;

     getchar();
    return 0;
}