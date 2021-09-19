//
// Created by vikoluna on 2/19/21.
//
#include<iostream>

using namespace std;

int main(){

    int entero = 25; // This is a simple integer

    float flotis = 20.2109; // Data with decimal point

    double doble = 0.93932842952489629874310; // This is very large

    char caracter = '@'; // Those characters must be between ''

    bool boli = true; // bool is a boolean data type, it must be True and False

    bool boli2 = false; // bool is a boolean data type, it must be True and False

    // void specifies a empty parameter list and also returns types for a function

    cout<<"\nThis is an integer: "<<entero<<endl;
    cout<<"This is a float: "<<flotis<<endl;
    cout<<"This is a double: "<<doble<<endl;
    cout<<"This is a character: "<<caracter<<endl;
    cout<<"This is a true boolean: "<<boli<<endl;
    cout<<"This is a false boolean: "<<boli2<<endl;

    cout<<"\nSize of char: "<<sizeof(char )<<" bytes"<<endl;
    cout<<"Size of int: "<<sizeof(int )<<" bytes"<<endl;
    cout<<"Size of short int: "<<sizeof (short int)<<" bytes"<<endl;
    cout<<"Size of long int: "<<sizeof(long int)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof(float )<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof(double )<<" bytes"<<endl;
    cout<<"Size of boolean: "<<sizeof(bool )<<" bytes\n"<<endl;

}
