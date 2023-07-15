/*
La Empresa Y posee 10 sucursales. Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    double empresaY[sucursales];

    for(int i = 0; i < sucursales; i++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", i+1);
        scanf("%d", &empresaY[sucursales]);
        printf("La sucursal numero %d tiene un ingreso total de $ %d \n\n\n", i+1, empresaY[sucursales]);
    }

    return 0;
}
