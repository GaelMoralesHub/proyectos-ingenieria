/*
Gael Morales Hernandez
222689665
LISTA DE SUMA
*/
#include <stdio.h>
int main(){
          int numero = 1, y = 0;
          
          while(numero != 0) {
          printf("INGRESA UN NUMERO: ");
          scanf("%d", &numero);
          y = numero + y;
                               }
                               
          printf("TU SUMA ES: %d", y);       
             
getch();
return 0;
}
