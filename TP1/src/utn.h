/*
 * utn.h
 *
 *  Created on: 17 sep. 2022
 *      Author: Lucio
 */

#ifndef UTN_H_
#define UTN_H_
/**
 * \fn int utn_getNumeroSinMaxNiMin(int*, char*, char*)
 * \brief  lo que hace esta funcion es validar  que no se puede ingresar  un caracter.
 * \param pResultado devuelve como puntero el resultado
 * \param mensaje es un printf dentro de la funcion
 * \param mensajeError si se ingresa algo que no esta bien salta el mensajeError
 * \return retorna 0 si esta bien y -1 si esta mal
 */
int utn_getNumeroSinMaxNiMin(int* pResultado, char* mensaje, char* mensajeError);
/**
 * \fn int utn_getNumeroEntero(int*, char*, char*, int, int)
 * \brief lo que hace esta funcion es validar que no se puede ingresar caracter y tiene dos parametros que obtiene el maximo y el minimo
 *
 * \param pResultado devuelve como puntero el resultado
 * \param mensaje es un printf que le podes poner lo que quieras
 * \param mensajeError  si se ingresa algo que no esta bien salta el mensajeError
 * \param minimo num maximo que se puede ingresar
 * \param maximo num minimo que se puede ingresar
 * \return
 */
int utn_getNumeroEnteroConMaxMin(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo);

/**
 * \fn int utn_getNumeroEnteroConMaxMin(int*, char*, char*)
 * \brief obtiene un numero sin buscar el maximo ni minimo
 *
 * \param pResultado devuelve por parametro el resultado
 * \param mensaje es un printf que le podes poner lo que quieras
 * \param mensajeError si se ingresa algo que no esta bien salta el mensajeError
 * \return
 */
int utn_getNumeroBasico(int* pResultado, char* mensaje, char* mensajeError);
/**
 * \fn int utn_obtenerValidacionLetra(int*, char*, int, int)
 * \brief  funcion que valida que no ingrese la letra y buscar el minimo y maximo
 *
 * \param resultado devuelve como puntero el resultado
 * \param mensajeError  si se ingresa algo que no esta bien salta el mensajeError
 * \param minimo num maximo que se puede ingresar
 * \param maximo num minimo que se puede ingresar
 * \return
 */
int utn_obtenerValidacionLetra(int* resultado, char* mensajeError, int minimo, int maximo);
/**
 * \fn void utn_obtenerPromedio(float*, int, int)
 * \brief esta funcion obtiene un promedio
 *
 * \param resultado devuelve como puntero el resultado
 * \param total  es el total
 * \param cantidad es por la que se va a dividir
 */
void utn_obtenerPromedio(float* resultado, int total, int cantidad );



#endif /* UTN_H_ */
