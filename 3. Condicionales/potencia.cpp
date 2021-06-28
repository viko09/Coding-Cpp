//x^y
// Created by vikoluna on 3/13/21.
//

#include <iostream>

using namespace std;

int main() {
    int x, y, z=1, i;
i = 1;
    cout << "Ingresa el valor de x: " << endl;
    cin >> x;
    cout << "Ingresa el valor de y: " << endl;
    cin >> y;

    if (y == 0 and x == 0) {
        cout << "No se reconoce el resultado, no se puede hacer eso xd" << endl;
    } else {
        if (y == 0) {
            cout << "El resultado es: 1" << endl;
                } else {
                    if (y == 1) {
                        cout << "El resultado es: " << x << endl;
                        } else {
                                do{
                                    i++;
                                    z*=x;
                                } while (i<=y);
                        cout<<"El resultado es: "<<z<<endl;
                            }
                        }
                    }
    return 0;
}
