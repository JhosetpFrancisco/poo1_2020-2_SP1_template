#include "SP1.h"
#include <iomanip>

void ejercicio_1() {
    // Completar
    int cantidad = 0;
    float precio = 0;
    float costo_total = 0;

    cin >> cantidad;
    cin >> precio;

    if (cantidad > 1001)
        costo_total = precio * 60 / 100 * cantidad;
    else if (1000 >= cantidad and cantidad > 251)
        costo_total = precio * 80 / 100 * cantidad;
    else if (250 >= cantidad and cantidad > 101)
        costo_total = precio * 90 / 100 * cantidad;
    else
        costo_total = precio * cantidad;

    cout << std::setprecision(1) << std::fixed;
    cout << "El pago por la compra es: " << costo_total << " Soles" << endl;
}

bool validate_triangle(int a, int b, int c) {
    if ((a + b > c) and (a + c > b) and (b + c > a))
        return true;
    else
        return false;
}

void ejercicio_2() {
    // Completar
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    if (validate_triangle(a,b,c)) {
        if ( a == b  and b == c and c == a)
            cout << "El Triangulo valido es equilatero";
        else if (a == b or b == c or c == a)
            cout << "El triangulo valido es isosceles";
        else
            cout << "El triangulo valido es escalar";
    }
    else {
        cout << "No es triangulo valido";
    }
}
