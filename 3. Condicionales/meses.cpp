//
// Created by vikoluna on 2/28/21.
//
#include "iostream"

using namespace std;

int main(){
    int mes;
    cout<<"Ingrese el número del 1 al 12"<<endl; cin>>mes;

    if(mes == 1)
            cout<<"El mes "<<mes<<" es Enero. Inicio de año, reyes :)"<<endl;
    else{
        if (mes == 2)
            cout<<"El mes "<<mes<<" es Febrero. El mes mas corto del año :)"<<endl;
        else{
            if (mes == 3)
                cout<<"El mes "<<mes<<" es Marzo. Primavera :)"<<endl;
            else{
                if (mes == 4)
                    cout<<"El mes "<<mes<<" es Abril. Mes del Niño :)"<<endl;
                else{
                    if (mes == 5)
                        cout<<"El mes "<<mes<<" es Mayo. Día de la mamá :)"<<endl;
                    else{
                        if (mes == 6)
                            cout<<"El mes "<<mes<<" es Junio. Cumpleaños de Adri :)"<<endl;
                        else{
                            if (mes == 7)
                                cout<<"El mes "<<mes<<" es Julio. Verano :)"<<endl;
                            else{
                                if (mes == 8)
                                    cout<<"El mes "<<mes<<" es Agosto. Nada pasa en Agosto :)"<<endl;
                                else{
                                    if (mes == 9)
                                        cout<<"El mes "<<mes<<" es Septiembre. Cumple de Victor Luna :)"<<endl;
                                    else{
                                        if (mes == 10)
                                            cout<<"El mes "<<mes<<" es Octubre. Hallowen >:)"<<endl;
                                        else{
                                            if (mes == 11)
                                                cout<<"El mes "<<mes<<" es Noviembre. Dia de muertos :)"<<endl;
                                            else{
                                                if (mes == 12)
                                                    cout<<"El mes "<<mes<<" es Diciembre. Feliz Navidad :)"<<endl;
                                                else{
                                                    cout<<"El número que ingresaste no le corresponde a ningún mes"<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
