/* 
Gael Morales Hernández
222689665
Tarea 4 Operadores
*/

#include <stdio.h>
#include <stdlib.h> // Para system("pause")

int main() {
    int a = 10, b = 3;
    float d = 12.5, e = 2.5;

    printf("\tOPERADORES ARITMETICOS\n");
    printf("a = 10, b = 3, d = 12.5, e = 2.5\n");

    printf("\nSuma: a + b = %d Suma los dos enteros.\n", a + b);
    printf("Resta: a - b = %d Resta b a a.\n", a - b);
    printf("Multiplicacion: a * b = %d Multiplica ambos valores.\n", a * b);
    printf("Potencia: a^2 = %d a multiplicado por sí mismo.\n", a * a);
    printf("Division: d / e = %.2f Divide dos valores reales.\n", d / e);
    printf("Modulo: a %% b = %d Resto de dividir a entre b.\n", a % b);

    printf("\n\tOPERADORES DE ASIGNACION\n");
    printf("Asignacion: a = b %d a toma el valor de b.\n", (a = b));
    printf("Asignacion compuesta: a *= b %d  -> a se multiplica por b.\n", (a *= b));
    printf("Asignacion compuesta: a /= b %d  -> a se divide entre b.\n", (a /= b));
    printf("Asignacion compuesta: a %%= b %d  -> a se vuelve el resto de dividir entre b.\n", (a %= b));
    printf("Asignacion compuesta: a += b %d  -> a incrementa en b.\n", (a += b));
    printf("Asignacion compuesta: a -= b %d  -> a decrementa en b.\n", (a -= b));

    printf("\n\tOPERADORES DE INCREMENTO / DECREMENTO\n");
    printf("Incremento: a++ = %d Devuelve a y luego incrementa en 1.\n", a++);
    printf("Ahora a vale: %d\n", a);
    printf("Decremento: a-- = %d Devuelve a y luego decrementa en 1.\n", a--);
    printf("Ahora a vale: %d\n", a);

    printf("\n\tOPERADORES RELACIONALES\n");
    printf("Igual que: a == b %d Devuelve 1 si son iguales.\n", a == b);
    printf("No igual que: a != b %d Devuelve 1 si son distintos.\n", a != b);
    printf("Mayor que: a > b %d Devuelve 1 si a es mayor.\n", a > b);
    printf("Menor que: a < b %d Devuelve 1 si a es menor.\n", a < b);
    printf("Mayor o igual que: a >= b %d Devuelve 1 si a es mayor o igual.\n", a >= b);
    printf("Menor o igual que: a <= b %d Devuelve 1 si a es menor o igual.\n", a <= b);

    printf("\n\tOPERADORES LOGICOS\n");
    printf("AND logico: (a > 0 && b > 0) %d Devuelve 1 si ambas condiciones son verdaderas.\n", (a > 0 && b > 0));
    printf("OR logico: (a > 0 || b < 0) %d Devuelve 1 si al menos una condicion es verdadera.\n", (a > 0 || b < 0));
    printf("NOT logico: !(a > b) %d Invierte el resultado, si era 1 pasa a 0.\n", !(a > b));

    getchar();
    return 0;
}
