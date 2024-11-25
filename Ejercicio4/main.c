//
// Created by alexa on 25/11/2024.
//
#include <stdio.h>

int main() {

    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    fclose(file);

    FILE *file2 = fopen("file.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file2, "Hola, mundo!\n");

    fclose(file2);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    fclose(file);

    return 0;
}