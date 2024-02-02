#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaCirculo(double radio) {
    return (radio * radio) * M_PI;
}

double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

int main() {
    int figura;
    double resultado;

    cout << "Seleccione la figura que desea calcular su area: \n";
    cout << "1. Circulo \n";
    cout << "2. Triangulo \n";
    cout << "3. Cuadrado \n";
    cin >> figura;

    switch (figura) {
        case 1: {
            double radio;
            cout << "Introduzca el radio del circulo: ";
            cin >> radio;
            resultado = calcularAreaCirculo(radio);
            break;
        }
        case 2: {
            double base, altura;
            cout << "Introduzca la base del triangulo: ";
            cin >> base;
            cout << "Introduzca la altura del triangulo: ";
            cin >> altura;
            resultado = calcularAreaTriangulo(base, altura);
            break;
        }
        case 3: {
            double lado;
            cout << "Introduzca el lado del cuadrado: ";
            cin >> lado;
            resultado = calcularAreaCuadrado(lado);
            break;
        }
        default: {
            cout << "Figura no valida";
            return 0;
        }
    }

    cout << "El area de la figura es: " << resultado << endl;

    return 0;
}
