/* 
Gael Morales Hernández
222689665
Tarea 5 Salario
*/

#include <stdio.h>

int main() {
    
    float horas, tarifa, horasExtra, tarifaExtra, porcentajeImpuestos;
    float salarioBruto, salarioNeto, impuesto;

 
    printf("Ingresa las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingresa la tarifa por hora: ");
    scanf("%f", &tarifa);

    printf("Ingresa las horas extras trabajadas: ");
    scanf("%f", &horasExtra);

    printf("Ingresa la tarifa por hora extra: ");
    scanf("%f", &tarifaExtra);

    printf("Ingresa el porcentaje de retencion de impuestos: ");
    scanf("%f", &porcentajeImpuestos);

    salarioBruto = (horas * tarifa) + (horasExtra * tarifaExtra);

    impuesto = (porcentajeImpuestos / 100) * salarioBruto;

    salarioNeto = salarioBruto - impuesto;

    printf("Salario bruto: %.2f\n", salarioBruto);
    printf("Salario neto: %.2f\n", salarioNeto);

    getch();
    return 0;
}
