//
// Created by Roberto C on 5/11/24.
//

#include <iostream>
#include "numero.h"

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Llamar a la función analizarNumero e imprimir el resultado
    cout << analizarNumero(numero) << endl;

    return 0;
}

