/*
Gael Morales Hernandez
222689665
13/9/2025
Programa para dar el resultado de las 4 operaciones básicas: suma, resta, multiplicación y división.
*/
#include <stdio.h>
int main(){

    float a, b;

        printf("ingresa el primer numero: ");
        scanf("%f", &a);
        
        printf("\nIngresa el segundo numero: ");
        scanf("%f", &b);
        
                    printf("\n---Resultados---");
        
        printf("\nSuma: %.2f", a + b);
        printf("\nResta: %.2f", a - b);
        printf("\nMultiplicacion: %.2f", a * b);
        printf("\nDivision: %.2f", a / b);
        
getch();
return 0;
}
