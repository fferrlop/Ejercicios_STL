cmake_minimum_required(VERSION 3.26)
project(Ejercicios_STL)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicios_STL main.cpp
        matematicas.cpp
        matematicas.h
        triangulo.cpp
        triangulo.h
        circulo.cpp
        circulo.h
        cuadrado.cpp
        cuadrado.h
        ciencias.cpp
        ciencias.h
)
