#include <iostream>
using namespace std;

int main(){
    double montoinicial;
    double porcentajeincremento;

    cout<<"Ingrese el monto inicial: ";
    cin>>montoinicial;
    cout<<"Ingrese el porcentaje incremento: ";
    cin>>porcentajeincremento;
    double nuevomonto=montoinicial + ( montoinicial* porcentajeincremento /100);
    cout<<"El nuevo monto es de: "<<nuevomonto<<endl;
    return 0;
}