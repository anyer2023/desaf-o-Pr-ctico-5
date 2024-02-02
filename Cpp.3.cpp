#include <iostream>
using namespace std;

void abrirPuertas() {
    cout << "Se han abierto las puertas del ascensor." << endl;
}

void cerrarPuertas() {
    cout << "Se han cerrado las puertas del ascensor." << endl;
}

void subirAscensor(int pisoActual, int pisoDestino) {
    for (int i = pisoActual + 1; i <= pisoDestino; i++) {
        cout << "El ascensor va subiendo al piso " << i << "." << endl;
    }
}

void bajarAscensor(int pisoActual, int pisoDestino) {
    for (int i = pisoActual - 1; i >= pisoDestino; i--) {
        cout << "El ascensor va bajando al piso " << i << "." << endl;
    }
}

int main() {
    int pisoActual = 1;
    int pisoDestino;

    cout << "El ascensor se encuentra en el piso " << pisoActual << "." << endl;
    abrirPuertas();
    cout << "Ingrese el piso al que desea ir: ";
    cin >> pisoDestino;

    if (pisoDestino > pisoActual) {
        cerrarPuertas();
        subirAscensor(pisoActual, pisoDestino);
    } else if (pisoDestino < pisoActual) {
        cerrarPuertas();
        bajarAscensor(pisoActual, pisoDestino);
    } else {
        cout << "Ya te encuentras en el piso deseado." << endl;
    }

    cout << "Se han abierto las puertas del ascensor." << endl;

    return 0;
}
