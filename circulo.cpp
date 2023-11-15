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

    class Circulo {

        private:
            double radio;

        public:
            Circulo(double r) : radio(r) {}
            double calcularArea() {
                return 3.14 * radio * radio;
            }
            double calcularPerimetro() {
                return 2 * 3.14 * radio;
        }
    };
}