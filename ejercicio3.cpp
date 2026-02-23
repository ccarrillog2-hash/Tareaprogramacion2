#include <iostream>
using namespace std;

int main() {
    float peso;
    float estatura;

    cout <<"Ingrese su estatura en metros: ";
    cin >> estatura;
    cout <<"Ingrese su peso en kilogramos: ";
    cin >> peso;

    float IMC = peso/ (estatura * estatura);
    cout <<"Su IMC es de: "<<IMC<<endl;
    return 0;
}