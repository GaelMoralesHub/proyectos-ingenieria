/*
Gael Morales Hernández
222689665
Programa para medir perímetro, área y tipo de un triángulo.
*/

#include <stdio.h>
#include <math.h>

int main() {
    // Variables de coordenadas
    int x1, y1, x2, y2, x3, y3;
    float lado1, lado2, lado3, perimetro, area, s;

    printf("\tPrograma para calcular el perímetro y área de un triángulo\n");

    // Entrada de coordenadas
    printf("\nIngresa las coordenadas del primer punto (x y): ");
    scanf("%d %d", &x1, &y1);

    printf("Ingresa las coordenadas del segundo punto (x y): ");
    scanf("%d %d", &x2, &y2);

    printf("Ingresa las coordenadas del tercer punto (x y): ");
    scanf("%d %d", &x3, &y3);

    // Cálculo de distancias entre los tres puntos
    lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    lado3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Verificar validez de triángulo
    int valido = (lado1 + lado2 > lado3) && 
                 (lado2 + lado3 > lado1) && 
                 (lado3 + lado1 > lado2);

    printf("\nEs un triangulo valido?: %d\n", valido);

    // Calcular perímetro y área
    perimetro = lado1 + lado2 + lado3;
    s = perimetro / 2.0;
    area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

    printf("\nDISTANCIAS ENTRE PUNTOS:");
    printf("\nLado 1: %.2f", lado1);
    printf("\nLado 2: %.2f", lado2);
    printf("\nLado 3: %.2f", lado3);

    printf("\n\nPERIMETRO: %.2f", perimetro);
    printf("\nAREA: %.2f\n", area);

    // Tipo de triángulo (usando solo expresiones lógicas)
    int equilatero = (lado1 == lado2) && (lado2 == lado3);
    int isosceles  = ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)) && !equilatero;
    int escaleno   = (lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3);

    printf("\nTIPO DE TRIANGULO (1 = verdadero, 0 = falso):");
    printf("\nEquilatero: %d", equilatero);
    printf("\nIsosceles: %d", isosceles);
    printf("\nEscaleno: %d\n", escaleno);

    getch();
    return 0;
}
