/*
Gael Morales Hernández
222689665
opciones, area y perimetro
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int menu;
    float base, altura, lado1, lado2, lado3, radio, area, perimetro;
    float D, d, apotema, basemayor, basemenor;

    printf("\tPROGRAMA CALCULAR PERIMETRO Y AREA:\n");
    printf("Ingresa un numero del 1 al 9:\n");
    printf("1. Triangulo\n");
    printf("2. Rectangulo\n");
    printf("3. Circulo\n");
    printf("4. Cuadrado\n");
    printf("5. Rombo\n");
    printf("6. Pentagono\n");
    printf("7. Hexagono\n");
    printf("8. Trapecio\n");
    printf("9. Paralelogramo\n");
                                           
    scanf("%d", &menu);

    switch(menu) {
        
        case 1:
        system("cls");
            printf("Triangulo:\n");
            printf("Ingresa la base: "); scanf("%f", &base);
            printf("Ingresa la altura: "); scanf("%f", &altura);
            printf("Ingresa los 3 lados:\n");
            scanf("%f %f %f", &lado1, &lado2, &lado3);
            area = (base * altura) / 2;
            perimetro = lado1 + lado2 + lado3;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 2:
        system("cls");
            printf("Rectangulo:\n");
            printf("Ingresa base: "); scanf("%f", &base);
            printf("Ingresa altura: "); scanf("%f", &altura);
            area = base * altura;
            perimetro = 2*(base+altura);
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;
        
        case 3:
        system("cls");
            printf("Circulo:\n");
            printf("Ingresa radio: "); scanf("%f", &radio);
            area = 3.1416 * (radio * radio);
            perimetro = 2 * 3.1416 * radio;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 4:
        system("cls");
            printf("Cuadrado:\n");
            printf("Ingresa lado: "); scanf("%f", &lado1);
            area = lado1 * lado1;
            perimetro = 4 * lado1;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 5:
        system("cls");
            printf("Rombo:\n");
            printf("Ingresa diagonal mayor: "); scanf("%f", &D);
            printf("Ingresa diagonal menor: "); scanf("%f", &d);
            printf("Ingresa lado: "); scanf("%f", &lado1);
            area = (D * d) / 2;
            perimetro = 4 * lado1;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 6:
        system("cls");
            printf("Pentagono regular:\n");
            printf("Ingresa lado: "); scanf("%f", &lado1);
            printf("Ingresa apotema: "); scanf("%f", &apotema);
            perimetro = 5 * lado1;
            area = (perimetro * apotema) / 2;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 7:
        system("cls");
            printf("Hexagono regular:\n");
            printf("Ingresa lado: "); scanf("%f", &lado1);
            printf("Ingresa apotema: "); scanf("%f", &apotema);
            perimetro = 6 * lado1;
            area = (perimetro * apotema) / 2;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 8:
        system("cls");
            printf("Trapecio:\n");
            printf("Ingresa base mayor: "); scanf("%f", &basemayor);
            printf("Ingresa base menor: "); scanf("%f", &basemenor);
            printf("Ingresa altura: "); scanf("%f", &altura);
            printf("Ingresa los lados no paralelos:\n");
            scanf("%f %f", &lado1, &lado2);
            area = ((basemayor + basemenor) * altura) / 2;
            perimetro = basemayor + basemenor + lado1 + lado2;
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        case 9:
        system("cls");
            printf("Paralelogramo:\n");
            printf("Ingresa base: "); scanf("%f", &base);
            printf("Ingresa altura: "); scanf("%f", &altura);
            printf("Ingresa lado: "); scanf("%f", &lado1);
            area = base * altura;
            perimetro = 2 * (base + lado1);
            printf("Area: %.2f\nPerimetro: %.2f\n", area, perimetro);
        break;

        default:
        system("cls");
            printf("Opcion no valida\n");
    }

    getch(); 
    return 0;
}
