/*
Gael Morales Hernández
222689665
IF, funcion
*/
#include <stdio.h>

int main() {
    
    float numero;

    printf("Ingresa un numero: ");
    scanf("%f", &numero);

    if (numero < 0) {
        printf("Funcion X2-X %.2f\n", -(numero * numero) - numero);
    }
    else if (numero > 0) {
        printf("Funcion -X2+ 3X %.2f\n", -(numero * numero) + 3 * numero);
    }        
    else {
    printf("Entrada Invalida");
    }

    getch();
    return 0;
}
