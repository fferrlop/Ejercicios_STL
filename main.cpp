#include <iostream>
#include "matematicas.h"

//Operaciones

    int main() {

        std::cout << "Suma: " << Matematicas::suma(8, 2) << std::endl;

        std::cout << "Resta: " << Matematicas::resta(6, 3) << std::endl;

        std::cout << "Multiplicacion: " << Matematicas::multiplicacion(4, 2) << std::endl;

        std::cout << "Division: " << Matematicas::division(12, 3) << std::endl;

        std::cout << "Potencia: " << Matematicas::potencia(2, 3) << std::endl;

        std::cout << "Raiz: " << Matematicas::raiz(16) << std::endl;



        return 0;
    }

