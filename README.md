# C-Libreria-estandar
[Link repositorio](https://github.com/Abanadja/C-Libreria-estandar)

## 1. Funciones comunes de <stdlib.h>
a. abs() - Valor absoluto de un número:

```cpp
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = -10;
    printf("El valor absoluto de %d es %d\n", num, abs(num));
    return 0;
}
```
b. rand() y srand() - Números aleatorios:
 ```cpp
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}
```
## 2. Manejo de cadenas <string.h>
a. strcmp() - Comparar cadenas:
```cpp
#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
```
b. strlen() - Longitud de una cadena:
```cpp
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";
    printf("La longitud de '%s' es: %d\n", str, (int)strlen(str));
    return 0;
}
```
## 3. Manejo de archivos <stdio.h>
a. fopen() - Abrir un archivo:
```cpp
#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (!file) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }
    fclose(file);
    return 0;
}
```
b. fprintf() y fscanf() - Escribir y leer en archivo:
```cpp
#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    fprintf(file, "Hola, mundo!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    char buffer[50];
    fscanf(file, "%s", buffer);
    printf("Leído del archivo: %s\n", buffer);
    fclose(file);
    return 0;
}
```
### Cómo resolver los ejercicios en CLion
Crear Proyecto: File > New Project y asignar un nombre.
Agregar Código: Crear un archivo fuente (clic derecho en src > New > C Source File) y pegar el código del ejercicio.
Compilar y Ejecutar:
Compilar: Build > Build Project.
Ejecutar: Run > Run 'NombreProyecto'.


