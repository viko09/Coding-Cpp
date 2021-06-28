// uso de la funcion strcmp()
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char wordOne[] = "Viko say Hello";
    char wordTwo[] = "Hello World";

    if (strcmp(wordOne,wordTwo) == 0){
        cout<<"Ambas cadenas son iguales"<<endl;
    } else{
        cout<<"Las cadenas son distintas"<<endl;
    }
// strcmp compara cual es mayor (alfabeticamente)

    if (strcmp(wordOne, wordTwo) > 0){
        cout<<wordOne<<": Está después alfabeticamente"<<endl;
    }

    cout<<"Press Enter to Continue...";
    getchar();
    return 0;
}