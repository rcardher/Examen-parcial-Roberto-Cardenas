//
// Created by Roberto C on 5/11/24.
//

#include "numero.h"

// Definición de la función que analiza el número
std::string analizarNumero(int numero) {
    if (numero > 0) {
        return "El número es positivo.";
    } else if (numero < 0) {
        return "El número es negativo.";
    } else {
        return "El número es cero.";
    }
}
//Fuente:Chat GPT
