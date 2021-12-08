#include "iostream"
#include "string.h"

using namespace std;

struct runner{
    char name[30];
    int age;
    char sex[15];
    char club[25];
}run1;

int main(){
    char category[20];
    cout << "Press any key to star...";
    cin.ignore(); // Empties the buffer and allow add values
    cout << "Name: ";
    cin.getline(run1.name, 30, '\n');
    cout << "Age: ";
    cin >> run1.age;
    cout << "Sex: ";
    cin.ignore();
    cin.getline(run1.sex, 15, '\n');
    cout << "Club: ";
    cin.getline(run1.club, 25, '\n');

    if (run1.age <= 18){
        strcpy(category, "Young");
    } else if (run1.age <= 40){
        strcpy(category, "Senior");
    } else{
        strcpy(category, "Veteran");
    }

    cout << "\n #### Runner Data #### \n";
    cout << "Name: " << run1.name << endl;
    cout << "Age: " << run1.age << endl;
    cout << "Sex: " << run1.sex << endl;
    cout << "Club: " << run1.club << endl;
    cout << "Category : " << category << endl;
}
