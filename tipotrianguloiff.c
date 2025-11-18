/*
Gael Morales Hernández
222689665
El numero es par, positivo, multiplo de tres
*/

#include <stdio.h>

int main(){
    
    int numero, par, multiplo;
    
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
        
    par = numero % 2 == 0;
    multiplo = numero % 3 == 0; 
    
    if (numero < 0) {
       printf("El numero es negativo\n");
       }
    
    else if (numero > 0) {
       printf("El numero es positivo\n");
       }
       
    else {
         printf("Tu numero es cero\n");
         }  
    
    printf("Tu numero es par: %d\n", par);
    printf("Tu numero es multiplo de tres: %d\n", multiplo);    
    
getch();
return 0;
}
