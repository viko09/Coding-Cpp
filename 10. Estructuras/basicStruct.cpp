// Estructura Básica en C++

# include "iostream"
using namespace std;

struct personalInfo{
    char name[100];
    int age;
} firstPerson, secondPerson;

int main(){
    cout <<"Name: ";
    cin.getline(firstPerson.name, 20, '\n');
    cout << "Age: ";
    cin>>firstPerson.age;

    cout << "\n Your data is \n";
    cout << "Name: " << firstPerson.name << endl;
    cout << "Age: " << firstPerson.age << endl;

    getchar();
    return 0;
}
