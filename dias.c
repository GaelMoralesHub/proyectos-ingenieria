/*
Gael Morales Hernández
222689665
Clasificación de triángulos
*/

#include <stdio.h>

int main() {
    int lado1, lado2, lado3, triangulovalido;
        
    triangulovalido = (lado1 + lado2 > lado3) && 
                      (lado1 + lado3 > lado2) && 
                      (lado2 + lado3 > lado1);
        
    printf("Ingresa los 3 lados de tu triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("El triangulo es equilatero.\n");
    } 
    else if ((lado1 == lado2 && lado1 != lado3) ||
             (lado1 == lado3 && lado1 != lado2) ||
             (lado2 == lado3 && lado2 != lado1)) {
        printf("El triangulo es isosceles.\n");
    } 
    else {
        printf("El triangulo es escaleno.\n");
    }
    
    printf("El triangulo es valido: %d\n", triangulovalido);

    getch();
    return 0;
}


