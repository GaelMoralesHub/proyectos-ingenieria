/*
Gael Morales Hernández
222689665
IF, calificacion
*/
#include <stdio.h>
#include <math.h>
int main(){    
    
    int calificacion;
    
        printf("Ingresa tu calificacion: ");
        scanf("%d", &calificacion);
        
    if(calificacion >= 90) {
        printf("Tu calificacion es excelente");
    }
    if(calificacion >= 70 && calificacion < 90) { 
        printf("Tu calificacion es aprobatoria");
    }
    else { 
        printf("Tu calificacion es reprobatoria");
        }
        
    getch();
    return 0;
}
