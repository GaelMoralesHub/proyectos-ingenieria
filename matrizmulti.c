/*
Gael Morales Hernandez
222689665
16 de noviembre del 2025
*/
#include <stdio.h>
#include <conio.h>

int main() {
    int filas, columnas;
    int matriz[10][10];
    int i, j;
    int a, b;
    int suma = 0;
    int moda, maxRep;
    float promedio;
    int actual, contador;

    printf("Ingrese numero de filas (max 10): ");
    scanf("%d", &filas);

    printf("Ingrese numero de columnas (max 10): ");
    scanf("%d", &columnas);

    printf("\n");

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            suma += matriz[i][j];
        }
        printf("\n");
    }

    promedio = (float)suma / (filas * columnas);

    moda = matriz[0][0];
    maxRep = 0;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {

            actual = matriz[i][j];
            contador = 0;

            for (a = 0; a < filas; a++) {
                for (b = 0; b < columnas; b++) {
                    if (matriz[a][b] == actual) {
                        contador++;
                    }
                }
            }

            if (contador > maxRep) {
                maxRep = contador;
                moda = actual;
            }
        }
    }

    printf("\nResultados:\n");
    printf("Suma total: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
    printf("Moda: %d (aparece %d veces)\n", moda, maxRep);

    getch();
    return 0;
}

