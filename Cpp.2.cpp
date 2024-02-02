#include <iostream>
#include <cstdlib>

using namespace std;

int generaNumero(int num1, int num2) {
    return rand() % (num2 - num1 + 1) + num1;
}

int main() {
    int numero1, numero2, limite, i;

    cout << "Introduce el primer número (límite inferior): ";
    cin >> numero1;
    cout << "Introduce el segundo número (límite superior): ";
    cin >> numero2;
    cout << "Introduce la cantidad de números a generar: ";
    cin >> limite;

    for (i = 0; i < limite; i++) {
        cout << generaNumero(numero1, numero2) << " ";
    }

    cout << endl;

    return 0;
}
