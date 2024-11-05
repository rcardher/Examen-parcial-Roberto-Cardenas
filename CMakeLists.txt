cmake_minimum_required(VERSION 3.29)
project(Examen_parcial_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("EJERCICIO 1")
include_directories("EJERCICIO 2")
include_directories("EJERCICIO 3")

add_executable(Examen_parcial_Roberto_Cardenas
    "EJERCICIO 1/numero.cpp"
    "EJERCICIO 1/numero.h"
    main.cpp
    main.h
        "EJERCICIO 2/dia.h"
        "EJERCICIO 2/dia.cpp"
        "EJERCICIO 3/calificaciones.h"
        "EJERCICIO 3/calificaciones.cpp")

