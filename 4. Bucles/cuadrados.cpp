//
// Created by vikoluna on 2/28/21.
//
#include "iostream"
#include "cmath"

using namespace std;

int main(){
    int i;
    float a, sum = 0;

    i = 0;
    do{
        i++;
        a = pow(i, 2);
        cout<<a<<endl;
        sum += a;
        cout<<"Suma = "<<sum<<endl;
    } while (i < 10);

    cout<<"Total Final = "<<sum<<endl;
    return 0;
}
