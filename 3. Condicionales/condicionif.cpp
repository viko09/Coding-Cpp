//
// Created by vikoluna on 2/25/21.
/* La sentencia if y if-else se escribe:
 *      if(condicion){
 *          instrucciones 1;
 *      }
 *      else{
 *          instrucciones 2;
 *      }
*/

#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;

    cout<<"Ingrese un número"<<endl; cin>>numero;

    if (numero==dato){ // Dos iguales es un operador de igualdad y uno solo es de asignación
        // != esto significa que son distintos de
        // < mayor >, menor <, >= mayor igual, <= menor igual
        cout<<"El número es el mismo :v"<<endl;
    } else{
        cout<<"El número es diferente: "<<numero<<endl;
    }

    return 0;
}
