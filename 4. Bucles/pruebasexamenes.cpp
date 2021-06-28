//
// Created by vikoluna on 3/21/21.
//

#include <iostream>

using namespace std;

int main(){
    float cal1, cal2, cal3, stats, suma;
    int n, reprobados = 0, aprobados = 0;

    cout<<"Ingrese el número de alumnos: "; cin>>n;
    cout<<"\n";

    for (int i = 1; i<=n; i++) {
        cout << "Ingrese la calificación del primer examen: " << endl;
        cin >> cal1;
        cout << "Ingrese la calificación del segundo examen: " << endl;
        cin >> cal2;
        cout << "Ingrese la calificación del tercer examen: " << endl;
        cin >> cal3;

        suma = cal1 + cal2 + cal3;
        stats = suma / 3;

        cout << "El promedio es: " << stats << endl;

        if (stats < 6) {
            cout << "REPROBADO" << endl;
            reprobados ++;
        }
            else {
            cout << "Aprobado :)" << endl;
            aprobados ++;
        }


        }

    cout<<"\n";
    cout<<"El número total de reprobados es: "<<reprobados<<endl;
    cout<<"El número total de aprobados es: "<<aprobados<<endl;
    return 0;
}
