//
// Created by alexa on 25/11/2024.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    // Ejercicio 1a
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    // Ejercicio 1b
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}