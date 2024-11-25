//
// Created by alexa on 25/11/2024.
//
#include <string.h>
#include <stdio.h>

int main() {

    // Ejercicio 2a
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    // Ejercicio 2b
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}