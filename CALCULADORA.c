  /*
Gael Morales Hernandez
222689665
CALCULADORA
*/
#include <stdio.h>
int main (){
    int calculadora, numero1, numero2;
        printf("ESCRIBE TUS DOS NUMEROS EN LA CALCULADORA: ");
        scanf("%d %d", &numero1, &numero2);
        printf("ELIGUE UNA OPCION PARA OPERAR TUS NUMEROS\n");
        printf("SUMA: 1\n");
        printf("RESTA: 2\n");
        printf("MULTIPLICACION: 3\n");
        printf("DIVISION: 4\n");
        scanf("%d", &calculadora);
        
        switch(calculadora){
               case 1:
                    printf("LA SUMA DE TUS NUMEROS ES: %d\n", numero1 + numero2);
                    break;
                    
               case 2:
                    printf("LA RESTA DE TUS NUMEROS ES: %d\n", numero1 - numero2);
                    break;
                    
               case 3:
                    printf("LA MULTIPLICACION DE TUS NUMEROS ES: %d\n", numero1 * numero2);
                    break;
                    
               case 4:
                    if (numero2 != 0)
                    printf("LA DIVISION DE TUS NUMEROS ES: %d\n", numero1 / numero2);
                    else
                    printf("ERROR: NO SE PUEDE DIVIDIR ENTRE 0\n");
                    break;
                             
               default:    
                    printf("OPCION NO VALIDA\n");     
                                   }
                             
           printf("FIN DEL PROGRAMA\n");
                          
    getch();
    return 0;
    }
