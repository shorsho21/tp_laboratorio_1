/*
 * utn.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Administrador
 */

#ifndef UTN_H_
#define UTN_H_

/** \brief
 *
 * \param precio float
 * \return float
 *
 */
float calcularTarjetaDebito(float precio);


/** \brief
 *
 * \param precio float
 * \return float
 *
 */
float calcularTarjetaCredito(float precio);

/** \brief
 *
 * \param precio float
 * \return float
 *
 */
float calcularBitcoin(float precio);

/** \brief
 *
 * \param precio float
 * \param kilometros int
 * \return float
 *
 */
float CalcularPrecioKm(float precio, int kilometros);


/** \brief
 *
 * \param precioLatam float
 * \param PrecioAerolineas float
 * \return float
 *
 */
float calcularDiferenciaPrecio(float precioLatam, float PrecioAerolineas);


/** \brief
 *
 * \return int
 *
 */
int menu();



#endif /* UTN_H_ */
