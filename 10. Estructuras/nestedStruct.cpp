// Nested Structures

#include <iostream>

using namespace std;

struct info_adress{
    char street[30];
    char locality[20];
    char state[20];
};

// This is the principal structure
struct person{
    char name[20];
    struct info_adress basic_info;  // <---- Esta es una estructura anidada
    double salary;
}people[2];

int main(){
    for (int i = 0; i < 2; ++i) { // De este for depende donde se guarden los datos
        cin.ignore(); // Empties the buffer and allow add values
        cout << "Name: ";
        cin.getline(people[i].name, 20, '\n');
        cout << "Street: ";
        cin.getline(people[i].basic_info.street, 30, '\n');
        cout << "City: ";
        cin.getline(people[i].basic_info.locality, 20, '\n');
        cout << "State: ";
        cin.getline(people[i].basic_info.state, 20, '\n');
        cout << "Salary: ";
        cin >> people[i].salary;
        cout << "\n";
    }
    // Print data
    for (int i = 0; i < 2; ++i) {
        cout << "Name: " << people[i].name << endl;
        cout << "Street: " << people[i].basic_info.street << endl;
        cout << "City: " << people[i].basic_info.locality << endl;
        cout << "State: " << people[i].basic_info.state << endl;
        cout << "Salary: " << people[i].salary << endl;
        cout << "\n";
    }

    return 0;
}
