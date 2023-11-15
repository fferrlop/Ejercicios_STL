#include <iostream>

//Funciones

namespace Matematicas {

    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        return a / b;
    }

    int potencia(int a, int b) {
        int resultado = 1;
        for (int i = 0; i < b; i++) {
            resultado *= a;
        }
        return resultado;
    }

    int raiz(int a) {
        int resultado = 0;
        for (int i = 0; i < a; i++) {
            if (i * i == a) {
                resultado = i;
            }
        }
        return resultado;
    }
}


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

