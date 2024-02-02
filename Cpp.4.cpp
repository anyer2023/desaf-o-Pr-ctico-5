#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

double applyDiscount(double total, double discount) {
    return total - (total * discount / 100);
}

int main() {
    Product products[3] = {{"frutas", 500, 10}, {"verduras", 300, 20}, {"abarrotes", 200, 30}};
    string clientName;
    double total = 0;

    cout << "Ingrese el nombre del cliente: ";
    cin >> clientName;

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la cantidad de " << products[i].name << ": ";
        cin >> products[i].quantity;
        total += products[i].price * products[i].quantity;
    }

    if (total > 1000) {
        total = applyDiscount(total, 20);
        cout << "Aplicando descuento del 20%" << endl;
    }

    cout << "El cliente " << clientName << " pagara un total de: " << total << endl;
    cout << "Producto\tPrecio\tCantidad\tDescuento\tTotal" << endl;
    for (int i = 0; i < 3; i++) {
        double discount = (total > 1000) ? 0.20 * products[i].price * products[i].quantity : 0;
        double subtotal = products[i].price * products[i].quantity - discount;
        cout << products[i].name << "\t" << products[i].price << "\t" << products[i].quantity << "\t" << discount << "\t" << subtotal << endl;
    }

    return 0;
}
