//
// Created by Francisco on 15/11/2023.
//

#include "ciencias.h"

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}