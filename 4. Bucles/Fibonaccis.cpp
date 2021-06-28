//
// Created by vikoluna on 3/15/21.
//
#include <iostream>

using namespace std;

int main(){
    int n, n1=0, n2=1, serie;
    cout<<"Type the value of 'n' such as n>2: "<<endl; cin>>n;
    cout<<"The "<<n<<" term of the Fibonacci's Series is: 1, ";
    for (int i=1; i<n; i++){
        serie = n1 + n2;
        cout<<serie<<", ";
        n1 = n2;
        n2 = serie;
    }
cout<<endl;
    return 0;
}
