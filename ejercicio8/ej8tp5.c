/*
Copie y modifique el algoritmo anterior, para que además imprima el total general de ventas.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int sucursales = 10;
    double empresaY[sucursales], totalVentas = 0.0;

    for(int i = 0; i < sucursales; i++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", i+1);
        scanf("%lf", &empresaY[sucursales]);
        printf("La sucursal numero %d tiene un ingreso total de $ %.2f \n\n\n", i+1, empresaY[sucursales]);
        totalVentas += empresaY[sucursales];
    }
    printf("El total de ventas de todas las sucursales es de $ %.2f \n", totalVentas);

    return 0;
}
