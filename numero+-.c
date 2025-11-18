/*
Gael Morales Hernández
222689665
IF, numero +-
*/
#include <stdio.h>

int main() {
    int numero;
    
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Tu numero es positivo");
    } 
    else if (numero < 0) {
        printf("Tu numero es negativo");
    } 
    else {
        printf("Tu numero es cero"); 
    }

    getch(); 
    return 0;
}
