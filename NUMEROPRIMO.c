/*
Gael Morales Hernandez
222689665
NUMERO PRIMO
*/
#include <stdio.h>

int main() {
    int numero, y = 2;
    int es_primo = 1; 

    printf("INGRESA UN NUMERO ENTERO: ");
    scanf("%d", &numero);

    while (y < numero) {
        if (numero % y == 0) {
            es_primo = 0; 
            break; 
        }
        y++;
    }

    if (es_primo == 1) {
        printf("TU NUMERO ES PRIMO\n");
    } else {
        printf("TU NUMERO NO ES PRIMO\n");
    }

    printf("FIN DEL PROGRAMA\n");

    getch();
    return 0;
}

