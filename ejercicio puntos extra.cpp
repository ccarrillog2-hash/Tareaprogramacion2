#include <iostream>
using namespace std;
int main()
{
    string nombre;
    int edad;
    float altura;
    double precio_de_producto;
    char inicial_del_apellido;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su altura: ";
    cin >> altura;
    cout << "Ingrese su precio: ";
    cin >> precio_de_producto;
    cout << "Ingrese inicial de su apellido: ";
    cin >> inicial_del_apellido;

    cout << endl;
    cout << "Resumen" << endl;
    cout << "nombre:" << nombre << endl;
    cout << "edad:" << edad << endl;
    cout << "altura:" << altura << endl;
    cout << "precio:" << precio_de_producto << endl;
    cout << "inicial de su apellido:" <<inicial_del_apellido<< endl;

    return 0;
}
