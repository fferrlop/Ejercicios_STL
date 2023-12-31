//
// Created by Francisco on 15/11/2023.
//

#ifndef EJERCICIOS_STL_CIRCULO_H
#define EJERCICIOS_STL_CIRCULO_H


namespace Geometria {

    double calcularAreaCirculo(double radio);

};

namespace Geometria {
    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r);

        double calcularArea();
        double calcularPerimetro();
    };
}
#endif //EJERCICIOS_STL_CIRCULO_H
