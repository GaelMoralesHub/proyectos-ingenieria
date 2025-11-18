/*
Gael Morales Hernández
222689665
Programa calcular area de un rectangulo
*/

#include <stdio.h>
int main(){
    
    float base, altura, area, perimetro;
    
          printf("Ingresa tu base: ");
          scanf("%f", &base);
    
          printf("\nIngresa tu altura: ");
          scanf("%f", &altura);
    
          area = (base * altura);
          perimetro = (base * 2) + (altura * 2);

   printf("\nLa area de tu rectangulo es: %f", area);
   printf("\nEl perimetro de tu rectangulo es: %f", perimetro);
    
getch();
return 0;

}
