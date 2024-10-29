#include "Funciones.h"
#include <iostream>
#include <cmath>

void calcular_triples_pitagoricos() {
    double a, b, c;

    for (a = 1; a <= 20; a++) { // Para a, se busca en el rango de 1 a 20
        for (b = 1; b <= 20; b++) { // Para b, se busca en el rango de 1 a 20
            c = sqrt(pow(a, 2) + pow(b, 2)); // Fórmula del teorema de Pitágoras
            if (c == static_cast<int>(c) && a + b > c && a + c > b && b + c > a) { // Condición para que sea un triángulo y c sea entero
                if ((a == 3 && b == 4 && c == 5) || // Encontramos los valores de a, b y c que cumplen con las condiciones: (3, 4, 5), (6, 8, 10), (5, 12, 13) y (8, 15, 17)
                    (a == 6 && b == 8 && c == 10) ||
                    (a == 5 && b == 12 && c == 13) ||
                    (a == 8 && b == 15 && c == 17)) {
                    std::cout << "Triple pitagorico: " << a << " - " << b << " - " << c << std::endl; // Imprimimos los valores de a, b y c
                    }
            }
        }
    }
}