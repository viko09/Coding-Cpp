# include "iostream"
# include "string.h"

using namespace std;

int main(){
    char phrase[] = "Hola, ¿que tal?, ";
    char urName[50];
    char completePhrase[100];

    cout<<"¿Cuál es tu nombre?"<<endl;
    cin.getline(urName, 50, '\n');

    strcpy(completePhrase, phrase);
    strcat(completePhrase, urName);

    cout<<completePhrase<<endl;

    cout<<"Press enter to continue...";
    getchar();
    return 0;
}