#include <iostream>
#include "matematicas.h"
#include "triangulo.h"
#include "circulo.h"
#include "cuadrado.h"
#include <cmath>
#include "ciencias.h"


//Operaciones

    int main() {

//Ejercicio1: Utilizacion completa de un espacio de nombres

std::cout << "Ejercicio 1: Utilizacion completa de un espacio de nombres" << std::endl;

        std::cout << "Suma: " << Matematicas::suma(8, 2) << std::endl;

        std::cout << "Resta: " << Matematicas::resta(6, 3) << std::endl;

        std::cout << "Multiplicacion: " << Matematicas::multiplicacion(4, 2) << std::endl;

        std::cout << "Division: " << Matematicas::division(12, 3) << std::endl;

        std::cout << "Potencia: " << Matematicas::potencia(2, 3) << std::endl;

        std::cout << "Raiz: " << Matematicas::raiz(16) << std::endl;


//Ejercicio 2: Espacio de nombres repartido entre diferentes archivos

std::cout << "--------------------------------------------------------------------------------" << std::endl;
std::cout << "Ejercicio 2: Espacio de nombres repartido entre diferentes archivos" << std::endl;

        std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(6, 3) << std::endl;

        std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(5) << std::endl;

        std::cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(6) << std::endl;


//Ejercicio 3: Relacion entre clase y espacio de nombres

std::cout << "--------------------------------------------------------------------------------" << std::endl;
std::cout << "Ejercicio 3: Relacion entre clase y espacio de nombres" << std::endl;

        Geometria::Circulo c(5);

            std::cout << "Area: " << c.calcularArea() << std::endl;
            std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;


//Ejercicio 4: Declaracion de subespacios de nombres

std::cout << "--------------------------------------------------------------------------------" << std::endl;
std::cout << "Ejercicio 4: Declaracion de subespacios de nombres" << std::endl;

        std::cout << "Energia: " << Ciencias::Fisica::calcularEnergia(1) << std::endl;


        return 0;
    }

