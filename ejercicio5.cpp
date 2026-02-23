#include <iostream>
using namespace std;

int main() {
    double precio_producto;
    double cantidad_producto;

    cout<<"Ingrese el precio del producto: ";
    cin>>precio_producto;
    cout <<"Ingrese el cantidad del producto: ";
    cin>>cantidad_producto;

    double total_a_pagar=precio_producto*cantidad_producto;

    cout<<"Total a pagar: "<<total_a_pagar<<endl;
    return 0;
}