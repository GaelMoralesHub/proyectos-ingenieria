/*
Gael Morales Hernández
222689665
Programa inventario tienda
*/

#include <stdio.h>
int main(){
  
  int a, b;
  float precioa, preciob, totala, totalb, promedioa, promediob;
  
  totala = a * precioa;
  totalb = b * preciob;
  promedioa = (totala / precioa);
  promediob = (totalb / preciob);
  
  printf("INVENTARIO TIENDA");
  
                      printf("\nIngresa la cantidad de tu primer producto: ");
                      scanf("%d", &a);
  
                      printf("\nIngresa el precio del primer producto producto: ");
                      scanf("%f", &precioa);
  
                      printf("\nIngresa la cantidad del segundo producto: ");
                      scanf("%d", &b);
  
                      printf("\nIngresa el precio del segundo producto: ");
                      scanf("%f", &preciob);;
  
  printf("\nEl total del primer producto es: %d", totala);
  printf("\nEl total del segundo producto es: %d", totalb); 
  printf("\nEl promedio es: %d", promedioa); 
  printf("\nEl promedio es: %d", promediob); 
  
getch();
return 0;
}
