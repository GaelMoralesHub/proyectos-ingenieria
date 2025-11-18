/*
Gael Morales Hernandez
222689665
FIGURAS
*/
#include <stdio.h>
int main() {
    
    int opcion;
    float x, y, base, altura, area, perimetro, apotema, lado, suma_lados;
    const float pi_valor = 3.1416f;

    printf("1. Triangulo\n");
    printf("2. Circulo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectangulo\n");
    printf("5. Rombo\n");
    printf("6. Pentagono\n");
    printf("7. Hexagono\n");
    printf("8. Trapecio\n");
    printf("9. Paralelogramo\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingresa la base del triangulo: ");
            scanf("%f", &x);
            printf("Ingresa la altura del triangulo: ");
            scanf("%f", &altura);
            perimetro = 3 * x;
            area = (x * altura) / 2;
            break;
        case 2:
            printf("Ingresa el radio del circulo: ");
            scanf("%f", &x);
            perimetro = 2 * pi_valor * x;
            area = pi_valor * x * x;
            break;
        case 3: 
            printf("Ingresa el lado del cuadrado: ");
            scanf("%f", &x);
            perimetro = 4 * x;
            area = x * x;
            break;
        case 4: 
            printf("Ingresa la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingresa la altura del rectangulo: ");
            scanf("%f", &altura);
            perimetro = 2 * (base + altura);
            area = base * altura;
            break;
        case 5: 
            printf("Ingresa la diagonal mayor del rombo: ");
            scanf("%f", &x);
            printf("Ingresa la diagonal menor del rombo: ");
            scanf("%f", &y);
            printf("Ingresa el lado del rombo: ");
            scanf("%f", &lado);
            perimetro = 4 * lado;
            area = (x * y) / 2;
            break;
        case 6:
            printf("Ingresa el lado del pentagono regular: ");
            scanf("%f", &x);
            printf("Ingresa el apotema del pentagono: ");
            scanf("%f", &apotema);
            perimetro = 5 * x;
            area = (perimetro * apotema) / 2;
            break;
        case 7:
            printf("Ingresa el lado del hexagono regular: ");
            scanf("%f", &x);
            printf("Ingresa el apotema del hexagono: ");
            scanf("%f", &apotema);
            perimetro = 6 * x;
            area = (perimetro * apotema) / 2;
            break;
        case 8:
            printf("Ingresa la base mayor del trapecio: ");
            scanf("%f", &x);
            printf("Ingresa la base menor del trapecio: ");
            scanf("%f", &y);
            printf("Ingresa la altura del trapecio: ");
            scanf("%f", &altura);
            printf("Ingresa la suma de los lados no paralelos: ");
            scanf("%f", &suma_lados);
            perimetro = x + y + suma_lados;
            area = ((x + y) * altura) / 2;
            break;
        case 9:
            printf("Ingresa la base del paralelogramo: ");
            scanf("%f", &base);
            printf("Ingresa la altura del paralelogramo: ");
            scanf("%f", &altura);
            printf("Ingresa el lado lateral del paralelogramo: ");
            scanf("%f", &lado);
            perimetro = 2 * (base + lado);
            area = base * altura;
            break;
        default:
            printf("Opcion no valida.\n");
            return 0;
    }

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    getch();
    return 0;
}
