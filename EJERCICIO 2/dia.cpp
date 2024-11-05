//
// Created by Roberto C on 5/11/24.
//

#include "dia.h"

std::string obtenerDiaSemana(int dia) {
    switch (dia) {
        case 1: return "Lunes";
        case 2: return "Martes";
        case 3: return "Miércoles";
        case 4: return "Jueves";
        case 5: return "Viernes";
        case 6: return "Sábado";
        case 7: return "Domingo";
        default: return "Número inválido. Ingrese un número del 1 al 7.";
    }
}
//Fuente:Chat Gpt
