/*
Gael Morales Hernández
222689665
Programa sumar,restar...
*/

#include <stdio.h>
int main(){
    
    int a, b;
    float resultado;
    
    printf("ingresa el primer entero: ");
    scanf("%d",&a);   
    
    printf("\ningresa el segundo entero: ");
    scanf("%d",&b); 
    
    resultado=a;
    printf("\n Resultado = a es: %.1f", resultado);
    
    resultado=a+b;
    printf("\n Resultado = a + b: %.1f", resultado);
    
    resultado=a-b;
    printf("\n Resultado = a - b es: %.1f", resultado);
    
    resultado=a/b;
    printf("\n Resultado = a / b es: %.1f", resultado);
    
    resultado=(float)a/b;
    printf("\n Resultado = a/b. es: %.3f", resultado);
    
    resultado=a*b;
    printf("\n Resultado = a * b es: %.1f", resultado);
    
getch();
return 0;
}
