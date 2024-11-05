cmake_minimum_required(VERSION 3.29)
project(Examen_parcial_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("EJERCICIO 1")

add_executable(Examen_parcial_Roberto_Cardenas
    "EJERCICIO 1/numero.cpp"
    "EJERCICIO 1/numero.h"
    main.cpp
    main.h)
