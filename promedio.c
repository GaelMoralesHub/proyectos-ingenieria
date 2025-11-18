/*
Gael Morales Hernandez
222689665
13/9/2025
Programa para sacar el promedio de trea valaores que proporcione el ususario.
*/
#include <stdio.h> 
int main(){
    
    float a, b, c;    
           
           printf("Ingresa tu primer numero: ");
           scanf("%f", &a);
    
           printf("Ingresa tu segundo numero: ");
           scanf("%f", &b);
           
           printf("Ingresa tu tercer numero: ");
           scanf("%f", &c);
           
           printf("El promedio de los tres numeros es: %.2f", (a + b + c) / 3);
           
    getch();
    return 0;
}
