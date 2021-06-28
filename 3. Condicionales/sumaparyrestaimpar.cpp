//
// Created by vikoluna on 3/15/21.
//
#include <iostream>

using namespace std;

int main(){
    int n, par, suma=0, resta=0;

    cout<<"Type the value of 'n': "<<endl;
    cin>>n;

    for (int i = 1; i <= n; ++i) {
        if (i%2==0){
            par = i*-1;
            resta+= par;
        } else{
            suma += i;
        }
    }

    cout<<"The total of the sum is: "<<resta+suma<<endl;

    return 0;
}
