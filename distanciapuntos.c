/*
Gael Morales Hernández
222689665
Programa distancia de 2 puntos
*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float z, zz, y, yy, distancia;
          
          printf("Ingresa el primer punto1: ");
          scanf("%f", &z);
          printf("\nIngresa el primer punto2: "); 
          scanf("%f", &zz);
          
          printf("\nIngresa el segundo punto1: ");
          scanf("%f", &y);
          printf("\nIngresa el segundo punto2: "); 
          scanf("%f", &yy);
          
    distancia = sqrt((zz - z)*(zz - z) + (yy - y)*(yy - y));
          
    printf("La distancia entre estos dos puntos es: %.2f", distancia);
  
getch();
return 0; 
}

