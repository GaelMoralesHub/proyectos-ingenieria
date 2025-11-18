/*
Gael Morales Hernandez
222689665
13/9/2025
Programa para sacar el numero de minutos con sus segundos a partir de los segundos.
*/
#include <stdio.h>
int main(){

    int s, m;
        
        printf("Ingresa tus segundos: ");
        scanf("%d", &s);
        
          m = s / 60;
          s = s % 60;
        
        printf("Tus segundos a minutos son: %d minutos y %d segundos", m, s); 

getch();
return 0;
}
