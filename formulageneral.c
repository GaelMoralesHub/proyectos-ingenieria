/* 
Gael Morales Hernandez
222689665
Tarea 5 Ecuacion Cuadratica
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, x1, x2;

    printf("\tECUACION CUADRATICA\n");
    printf("La ecuacion es de la forma ax^2 + bx + c = 0\n");

    printf("\nIngresa el valor de a: ");
    scanf("%f", &a);
    printf("Ingresa el valor de b: ");
    scanf("%f", &b);
    printf("Ingresa el valor de c: ");
    scanf("%f", &c);

    discriminante = (b * b) - (4 * a * c);

    printf("\nDiscriminante: %.2f\n", discriminante);
    printf("Tiene soluciones reales: %d\n", (discriminante >= 0));

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    printf("\nRaiz 1: %.2f\n", x1);
    printf("Raiz 2: %.2f\n", x2);

    getch();
    return 0;
}
