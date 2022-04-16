/*
 * utn.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Administrador
 */

#include <stdio.h>
#include <stdlib.h>

//a.CALCULAR DESCUENTO TARJETA DE DEBITO
float calcularTarjetaDebito(float precio)
{
    float descuento;
    descuento = precio - (precio*0.10);

    return descuento;
}

//b) Tarjeta de crédito (interés 25%)
float calcularTarjetaCredito(float precio)
{
    float aumento;
    aumento = precio + (precio * 0.25);
    return aumento;

}

//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
float calcularBitcoin(float precio)
{
    float costoBitcoin;

    costoBitcoin = (precio / 4606954.55);

    return costoBitcoin;

}

//d) Mostrar precio por km (precio unitario)
float CalcularPrecioKm(float precio, int kilometros)
{
    float PrecioUnitario;

    PrecioUnitario = precio / kilometros;

    return PrecioUnitario;


}

//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
float calcularDiferenciaPrecio(float precioLatam, float PrecioAerolineas)
{
    float diferenciaPrecio;

    diferenciaPrecio = precioLatam - PrecioAerolineas ;

    return diferenciaPrecio;
}

//mostrar menu
int menu()
{
        int OpcionIngresada;

        system("cls");
        printf("Ingrese la opcion que desee\n\n");

        printf("1.Ingresar kilometros\n");

        printf("2.Ingresar precio de vuelos\n");

        printf("3.Calcular todos los costos:\n");

        printf("4.Informar Resultados\n");

        printf("5.Carga forzada de datos\n");

        printf("6.Salir\n");
        //pedido de opcion;
        scanf("%d",&OpcionIngresada);
        system("cls");

        return OpcionIngresada;
}


