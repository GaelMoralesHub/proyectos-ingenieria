/*
Gael Morales Hernandez
222689665
13/9/2025
Programa para sacar el area de un circulo usando su radio
*/
#include <stdio.h>
int main(){

    float radio, area;
    const float pi = 3.141592;
    
        printf("Ingresa el radio de tu circulo: ");
        scanf("%f", &radio);
             
                radio *= radio;
                area = pi * radio;
                
        printf("El area de tu circulo es: %f\n", area);
        
    getch();
    return 0;
}
