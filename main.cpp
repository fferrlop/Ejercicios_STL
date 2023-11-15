#include <iostream>
#include "matematicas.h"
#include "triangulo.h"

//Operaciones

    int main() {

//Ejercicio1: Utilización completa de un espacio de nombres

std::cout << "Ejercicio 1: Utilización completa de un espacio de nombres" << std::endl;

        std::cout << "Suma: " << Matematicas::suma(8, 2) << std::endl;

        std::cout << "Resta: " << Matematicas::resta(6, 3) << std::endl;

        std::cout << "Multiplicacion: " << Matematicas::multiplicacion(4, 2) << std::endl;

        std::cout << "Division: " << Matematicas::division(12, 3) << std::endl;

        std::cout << "Potencia: " << Matematicas::potencia(2, 3) << std::endl;

        std::cout << "Raiz: " << Matematicas::raiz(16) << std::endl;


//Ejercicio 2: Espacio de nombres repartido entre diferentes archivos

std::cout << "--------------------------------------------------------------------------------" << std::endl;
std::cout << "Ejercicio 2: Espacio de nombres repartido entre diferentes archivos" << std::endl;

        std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(4, 2) << std::endl;

        return 0;
    }

