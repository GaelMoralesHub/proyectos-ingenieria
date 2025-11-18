/*
Gael Morales Hernández
222689665
12/9/25
Programa para recopilar datos de un usuario
*/

#include <stdio.h>
int main(){

    char nombre[30];
    int edad;
    float estaturametros;
    char inicialapellido;

         printf("---Datos de usuario---");
  
         printf("\ningresa su nombre: ");
         scanf("%s", &nombre);

         printf("\nIngresa su edad: ");
         scanf("%d", &edad);

         printf("\ningresa su estatura en metros: ");
         scanf("%f", &estaturametros);

                     getchar();

         printf("\ningresa la letra inicial de su primer apellido: ");
         scanf("%c", &inicialapellido);
         
         printf("\n--- Datos del Usuario ---\n");
         printf("Nombre: %s\n", nombre);
         printf("Edad: %d\n", edad);
         printf("Estatura: %.2f\n", estaturametros);
         printf("Inicial Apellido: %c\n", inicialapellido);

getch();
return 0;         
}
