/*
 ============================================================================
 Name        : trabajopractico1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int main(void)
{
	//virables
		setbuf(stdout, NULL);
	    int kilometrosIngresado=0;
	    int terminarPrograma=0;
	    float precioAerolineas = 0;
	    float precioLatam = 0;
	    //precio tarjeta debito
	    float CostoTarjetaDebitoLatam;
	    float costoTarjetaDebitoAerolineas;
	    //precio tarjeta credito
	    float costoTarjetaCreditoLatam;
	    float costoTarjetaCreditoAerolineas;
	    //precio bitcoin
	    float costoEnBitcoinLatam;
	    float costoEnBitcoinAerolineas;
	    //precio por km
	    float precioKmLatam;
	    float precioKmAerolineas;
	    //e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
	    float diferenciaDeCosto;
	    //Datos forzados
	    int km = 7090;
	    float aerolineasArgentinas = 162965;
	    float latam = 159339;
	    //calculos ok
	    int calculosOk = 0;

	        do
	        {
	        switch(menu())
	        {
	        case 1:
	            printf("ingrese la cantidad de kilometros\n");

	            scanf("%d", &kilometrosIngresado);
	            while(kilometrosIngresado<=0)
	            {
	                printf("error, ingrese una cantidad valida");
	                scanf("%d", &kilometrosIngresado);
	            }
	            system("pause");
	        break;
	        case 2:
	            if(kilometrosIngresado == 0)
	            {
	                printf("todavia no ingreso los KMs\n");
	                system("pause");
	            }
	            else
	            {
	                printf("ingrese el precio de los vuelos\n");
	                printf("precio de aerolineas: ");
	                scanf("%f",&precioAerolineas);
	                while(precioAerolineas <= 0)
	                {
	                    printf("\nPrecio invalido, ingrese un precio valido");
	                    scanf("%f",&precioAerolineas);
	                }

	                    printf("\nprecio de LATAM: ");
	                    scanf("%f",&precioLatam);
	                    while(precioLatam<=0)
	                    {
	                        printf("\nPrecio invalido, ingrese un precio valido");
	                        scanf("%f",&precioLatam);
	                    }

	                    system("pause");
	            }
	            break;
	        case 3:
	            if(precioAerolineas == 0)
	            {
	                printf("Todavia no ingresaste los precios\n");
	                system("pause");
	            }
	            else
	            {
	            //a) Tarjeta de débito (descuento 10%)
	            CostoTarjetaDebitoLatam = calcularTarjetaDebito(precioLatam);
	            costoTarjetaDebitoAerolineas = calcularTarjetaDebito(precioAerolineas);
	            //b) Tarjeta de crédito (interés 25%)
	            costoTarjetaCreditoLatam = calcularTarjetaCredito(precioLatam);
	            costoTarjetaCreditoAerolineas = calcularTarjetaCredito(precioAerolineas);
	            //c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	            costoEnBitcoinLatam = calcularBitcoin(precioLatam);
	            costoEnBitcoinAerolineas = calcularBitcoin(precioAerolineas);
	            //d) Mostrar precio por km (precio unitario)
	            precioKmLatam = CalcularPrecioKm(precioLatam, kilometrosIngresado);
	            precioKmAerolineas = CalcularPrecioKm(precioAerolineas, kilometrosIngresado);
	            //e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
	            diferenciaDeCosto = calcularDiferenciaPrecio(precioLatam, precioAerolineas);

	            printf("los costos han sido calculados\n");
	            calculosOk = 1;
	            system("pause");
	            }
	            break;
	        case 4:
	            if(calculosOk == 0)
	            {
	                printf("Todavia no calculaste los costos\n");
	                system("pause");
	                break;
	            }
	            else
	            {
	                printf("Los resultados son: \n\n");
	                printf("KMs ingresado: %d\n\n", kilometrosIngresado);
	                //Precios de LATAM
	                printf("Precio LATAM: %.2f \n", precioLatam);
	                printf("Precio con tarjeta de debito: %.2f\n",CostoTarjetaDebitoLatam);
	                printf("Precio con tarjeta de credito: %.2f\n",costoTarjetaCreditoLatam);
	                printf("Precio en bitcoin: %.2f\n",costoEnBitcoinLatam);
	                printf("Precio unitario por Km: %.2f\n",precioKmLatam);
	                //Precios de Aerolineas
	                printf("\nPrecio Aerolineas: %.2f \n", precioAerolineas);
	                printf("Precio con tarjeta de debito: %.2f\n",costoTarjetaDebitoAerolineas);
	                printf("Precio con tarjeta de credito: %.2f\n",costoTarjetaCreditoAerolineas);
	                printf("Precio en bitcoin: %.2f\n",costoEnBitcoinAerolineas);
	                printf("Precio unitario por Km: %.2f\n",precioKmAerolineas);
	                //diferencia de costo;
	                printf("\nDiferencia de precio: %.2f\n",diferenciaDeCosto);
	            }
	            system("pause");
	            break;

	        case 5:
	            //carga forzada de datos;
	            kilometrosIngresado = km;
	            precioAerolineas = aerolineasArgentinas;
	            precioLatam = latam;
	            //calcular datos forzados
	            //a) Tarjeta de débito (descuento 10%)
	            CostoTarjetaDebitoLatam = calcularTarjetaDebito(precioLatam);
	            costoTarjetaDebitoAerolineas = calcularTarjetaDebito(precioAerolineas);
	            //b) Tarjeta de crédito (interés 25%)
	            costoTarjetaCreditoLatam = calcularTarjetaCredito(precioLatam);
	            costoTarjetaCreditoAerolineas = calcularTarjetaCredito(precioAerolineas);
	            //c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	            costoEnBitcoinLatam = calcularBitcoin(precioLatam);
	            costoEnBitcoinAerolineas = calcularBitcoin(precioAerolineas);
	            //d) Mostrar precio por km (precio unitario)
	            precioKmLatam = CalcularPrecioKm(precioLatam, kilometrosIngresado);
	            precioKmAerolineas = CalcularPrecioKm(precioAerolineas, kilometrosIngresado);
	            //e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
	            diferenciaDeCosto = calcularDiferenciaPrecio(precioLatam, precioAerolineas);
	            //mostrar los datos forzados
	            printf("Los resultados son: \n\n");
	            printf("KMs ingresado: %d\n\n", kilometrosIngresado);
	            //Precios de LATAM
	            printf("Precio LATAM: %.2f \n", precioLatam);
	            printf("Precio con tarjeta de debito: %.2f\n",CostoTarjetaDebitoLatam);
	            printf("Precio con tarjeta de credito: %.2f\n",costoTarjetaCreditoLatam);
	            printf("Precio en bitcoin: %.2f\n",costoEnBitcoinLatam);
	            printf("Precio unitario por Km: %.2f\n",precioKmLatam);
	            //Precios de Aerolineas
	            printf("\nPrecio Aerolineas: %.2f \n", precioAerolineas);
	            printf("Precio con tarjeta de debito: %.2f\n",costoTarjetaDebitoAerolineas);
	            printf("Precio con tarjeta de credito: %.2f\n",costoTarjetaCreditoAerolineas);
	            printf("Precio en bitcoin: %.2f\n",costoEnBitcoinAerolineas);
	            printf("Precio unitario por Km: %.2f\n",precioKmAerolineas);
	            //diferencia de costo;
	            printf("\nDiferencia de precio: %.2f\n",diferenciaDeCosto);
	            system("pause");
	            break;

	        case 6:
	            printf("saliendo\n");
	            terminarPrograma=1;
	            system("pause");
	            break;
	        }
	        }while(terminarPrograma == 0);






	return EXIT_SUCCESS;
}
