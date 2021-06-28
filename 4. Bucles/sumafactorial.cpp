//
// Created by vikoluna on 3/14/21.
//

#include <iostream>

using namespace std;

int main(){
    int n, fac = 1, sum=0;

    cout<<"Type the 'n' value: "<<endl; cin>>n;

        for (int i=1; i<=n; i++){
            fac *= i;
            sum += fac;
        }

    cout<<"The sum of "<< n <<" factorials is: "<<suma<<endl;
    return 0;
}