//
// Created by Roberto C on 5/11/24.
//

#include "calificaciones.h"

double calcularPromedio(double calificaciones[], int cantidad) {
    double suma = 0.0;

    // Sumar todas las calificaciones
    for (int i = 0; i < cantidad; i++) {
        suma += calificaciones[i];
    }

    // Calcular el promedio
    return suma / cantidad;
}
//Fuente:Chat GPT
