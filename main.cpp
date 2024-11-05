//
// Created by Roberto C on 5/11/24.
//

#include <iostream>
#include "numero.h"
#include "dia.h"
#include "EJERCICIO 2/dia.h"

using namespace std;

int main() {
    int opcion;

    cout << "Seleccione una opción:\n";
    cout << "1. Analizar si un número es positivo, negativo o cero\n";
    cout << "2. Obtener el día de la semana a partir de un número del 1 al 7\n";
    cout << "Ingrese su opción (1 o 2): ";
    cin >> opcion;

    if (opcion == 1) {
        // Opción 1: Analizar si un número es positivo, negativo o cero
        int numero;
        cout << "Ingrese un número entero: ";
        cin >> numero;
        cout << analizarNumero(numero) << endl;

    } else if (opcion == 2) {
        // Opción 2: Obtener el día de la semana
        int dia;
        cout << "Ingrese un número del 1 al 7 para obtener el día de la semana: ";
        cin >> dia;
        cout << obtenerDiaSemana(dia) << endl;

    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}



