/*
CONVERSOR DE LITROS
Gael Morales Hernandez
222689665
*/

#include <stdio.h>

int main() {
    float litros;
    int opcion;

    printf("INGRESA LA CANTIDAD EN LITROS: ");
    scanf("%f", &litros);

    printf("\nELIGE UNA OPCION PARA CONVERTIR:\n");
    printf("1. LITROS A MICROLITROS\n");
    printf("2. LITROS A MILILITROS\n");
    printf("3. LITROS A CENTILITROS\n");
    printf("4. LITROS A DECILITROS\n");
    printf("5. LITROS A GALONES\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("TUS LITROS A MICROLITROS SON: %.2f\n", litros * 1000000);
            break;
        case 2:
            printf("TUS LITROS A MILILITROS SON: %.2f\n", litros * 1000);
            break;
        case 3:
            printf("TUS LITROS A CENTILITROS SON: %.2f\n", litros * 100);
            break;
        case 4:
            printf("TUS LITROS A DECILITROS SON: %.2f\n", litros * 10);
            break;
        case 5:
            printf("TUS LITROS A GALONES SON: %.2f\n", litros / 3.785);
            break;
        default:
            printf("OPCION NO VALIDA\n");
    }

    printf("\nFIN DEL PROGRAMA\n");

    getch();
    return 0;
}
