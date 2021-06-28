// Uso de la función strcat();
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char firstLine[] = "Carmen se me perdio la cadenita. ";
    char secondLine[] = "Ya estan unidas, ya no esta perdida. :3";
    char nuevaLine[100];

    strcpy(nuevaLine, firstLine); // se guarda en la nueva linea: Carmen se me perdio la cadenita
    strcat(nuevaLine, secondLine); // se guarda en la nueva linea: Carmen se me perdio la cadenita. Ya es....
    cout<<nuevaLine<<endl;

    cout<<"Press enter to continue...";
    getchar();
    return 0;
}

