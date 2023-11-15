//
// Created by Francisco on 15/11/2023.
//

#include "circulo.h"

//Ejercicio 2

namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
}


//Ejercicio 3

namespace Geometria {

    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3.14 * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * 3.14 * radio;
    }
}
