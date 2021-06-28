// sum 2^n
// Created by vikoluna on 3/14/21.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, suma=0;
    cout<<"Type the 'n' value: "<<endl; cin>>n;

    for (int i=1; i<=n; i++){
        suma+= pow(2, i);
    }
cout<<"The total value of the sum is: "<<suma<<endl;

    return 0;
}
