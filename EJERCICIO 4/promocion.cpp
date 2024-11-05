//
// Created by Roberto C on 5/11/24.
//
// promocion.cpp
#include "promocion.h"
#include <algorithm> // Para std::sort

double calcularTotal(double precio1, double precio2, double precio3) {
    double precios[3] = {precio1, precio2, precio3};

    // Ordenamos los precios de mayor a menor
    std::sort(precios, precios + 3, std::greater<double>());

    // El total es la suma de los dos artículos más caros
    return precios[0] + precios[1];
}
//Fuente ChatGPT
