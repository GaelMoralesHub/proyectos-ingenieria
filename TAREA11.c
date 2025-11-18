/*
Gael Morales Hernandez
222689665
Tarea 11
*/
#include <stdio.h>

int main() {
    int v1[10], v2[10], v3[10];
    int n, i;

    printf("Ingrese el numero de elementos (maximo 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("El tamanio debe ser entre 1 y 10.\n");
        return 1;
    }

    printf("Ingrese los elementos del primer vector:\n");
    for (i = 0; i < n; i++) {
        printf("v1[%d] = ", i);
        scanf("%d", &v1[i]);
    }

    printf("Ingrese los elementos del segundo vector:\n");
    for (i = 0; i < n; i++) {
        printf("v2[%d] = ", i);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < n; i++) {
        v3[i] = v1[i] * v2[i];
    }

    printf("\nVector 1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nVector 2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }

    printf("\nVector 3 (resultado): ");
    for (i = 0; i < n; i++) {
        printf("%d ", v3[i]);
    }

    printf("\n");

    getch();
    return 0;
}
