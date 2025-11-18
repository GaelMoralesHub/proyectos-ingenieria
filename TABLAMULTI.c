/*
Gael Morales Hernandez
222689665
TABLA DE MULTIPLICAR
*/
#include <stdio.h>
int main(){
    int numero, y = 1;

        printf("INGRESA UN NUMERO PARA VER SU TABLA DE MULTIPLICAR: ");
        scanf("%d", &numero);
        
        while(y <= 10){
        printf("%d\n", numero * y);
        y ++;
                                }
getch();
return 0;
}

