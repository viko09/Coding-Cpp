# include "iostream"

using namespace std;

struct alumni{
    char name[35];
    int age;
    float grade;
}student[3];

int main(){
    for (int i = 0; i < 3; ++i) {
        // fflush(stdin);
        cin.clear();
        fflush(stdin);
        cout << i + 1 << ". Name: ";
        cin.getline(student[i].name, 35, '\n');
        cout << i + 1 <<". Age: ";
        cin >> student[i].age;
        cout << i + 1 <<". Grade: ";
        cin >> student[i].grade;
        cout << '\n';
    }

    return 0;
}
