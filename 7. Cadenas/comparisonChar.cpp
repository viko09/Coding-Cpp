# include <iostream>
# include <string.h>

using namespace std;

int main(){
    char firstChar[100], secondChar[100];

    cout<<"Ingrese una línea de Texto"<<endl;
    cin.getline(firstChar, 100, '\n');
    cout<<"Ingrese otra linea de Texto"<<endl;
    cin.getline(secondChar, 100, '\n');

    if (strcmp(firstChar, secondChar) == 0){
        cout<<"Ambas líneas son iguales."<<endl;
    } else if (strcmp(firstChar, secondChar) != 0){
        cout<<"Las cadenas son diferentes."<<endl;
    }

    if (strcmp(firstChar, secondChar) != 0) {
        if (strcmp(firstChar, secondChar) > 0) {
            cout<< firstChar <<": Está después alfabeticamente"<<endl;
        } else{
            cout<< secondChar <<": Esta después alfabeticamente"<<endl;
        }
    }
    cout<<"press Enter to continue... ";
    getchar();
    return 0;
}

//g++ -Wall -D_FILE_OFFSET_BITS=64 merge_corsika.cc -o merge_corsika -I../../include ->