//
// Created by Roberto C on 5/11/24.
//

#include <iostream>
#include "numero.h"
#include "dia.h"
#include "calificaciones.h"
#include "promocion.h"


using namespace std;

int main() {
    int opcion;

    cout << "Seleccione una opción:\n";
    cout << "1. Analizar si un número es positivo, negativo o cero\n";
    cout << "2. Obtener el día de la semana a partir de un número del 1 al 7\n";
    cout << "3. Calcular el promedio de calificaciones\n";
    cout << "4. Calcular el total a pagar bajo la promoción de 3 por 2\n";
    cout << "Ingrese su opción (1, 2, 3 o 4): ";
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

    } else if (opcion == 3) {
        // Opción 3: Calcular el promedio de calificaciones
        const int TOTAL_CALIFICACIONES = 8; // Número total de ejercicios
        double calificaciones[TOTAL_CALIFICACIONES];

        // Solicitar calificaciones al usuario
        cout << "Ingrese las calificaciones obtenidas en " << TOTAL_CALIFICACIONES << " ejercicios prácticos:\n";
        for (int i = 0; i < TOTAL_CALIFICACIONES; i++) {
            cout << "Calificación " << (i + 1) << ": ";
            while (!(cin >> calificaciones[i]) || calificaciones[i] < 0 || calificaciones[i] > 10) {
                cout << "Entrada inválida. Debe ser un número entre 0 y 10. Intente nuevamente: ";
                cin.clear(); // Limpiar el estado de error
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar hasta el siguiente salto de línea
            }
        }

        // Calcular y mostrar el promedio
        double promedio = calcularPromedio(calificaciones, TOTAL_CALIFICACIONES);
        cout << "El promedio de las calificaciones es: " << promedio << endl;

    } else if (opcion == 4) {
        // Opción 4: Calcular total a pagar bajo la promoción de 3 por 2
        double precio1, precio2, precio3;
        cout << "Ingrese el precio del primer artículo: ";
        cin >> precio1;
        cout << "Ingrese el precio del segundo artículo: ";
        cin >> precio2;
        cout << "Ingrese el precio del tercer artículo: ";
        cin >> precio3;

        double totalAPagar = calcularTotal(precio1, precio2, precio3);
        cout << "El total a pagar bajo la promoción de 3 por 2 es: " << totalAPagar << endl;

    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}








