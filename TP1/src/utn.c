/*
 * utn.c
 *
 *  Created on: 17 sep. 2022
 *      Author: Lucio
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo){

	int retorno = -1;
	int bufferInt;


			printf("%s",mensaje );
			fflush(stdin);
			if(scanf("%d", &bufferInt)== 1){
					if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo ){

						if(bufferInt >= minimo && bufferInt <=maximo){

								*pResultado = bufferInt;
								retorno = 0;
						}
					}

			}else{
				return retorno;
				printf("%s",mensajeError);
			}

			return  retorno;

	}


int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos){

	int retorno = -1;
	float bufferfloat;


	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0 ){

		do{
			printf("%s",mensaje );
			fflush(stdin);
			if(scanf("%f", &bufferfloat)== 1){}
				if(bufferfloat >= minimo && bufferfloat <=maximo){

					*pResultado = bufferfloat;
					retorno = 0;
					break;

				}else{
					printf("%s",mensajeError);
					reintentos--;
				}
		}while(reintentos >= 0);
	}

	return  retorno;
}


int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos){

	int retorno = -1;
	char bufferChar;


		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0 ){

			do{
				printf("%s",mensaje );
				fflush(stdin);
				scanf("%c", &bufferChar);
					if(bufferChar >= minimo && bufferChar <=maximo){

						*pResultado = bufferChar;
						retorno = 0;
						break;

					}else{
						printf("%s",mensajeError);
						reintentos--;
					}
			}while(reintentos >= 0);
		}

		return  retorno;
}

int utn_getNumeroBasico(int* pResultado, char* mensaje, char* mensajeError){

	int rtn = -1;
	int bufferInt;


		printf("%s",mensaje );
		fflush(stdin);
		if(scanf("%d", &bufferInt) == 1){

			if(pResultado != NULL && mensaje != NULL){

				*pResultado = bufferInt;

				rtn =  0;

			}

		}else{
			return rtn;
			printf("%s",mensajeError);

		}

	return rtn;
}

int obtenerValidacionLetra(int* resultado, char *mensajeError, int minimo, int maximo){

	int rtn = -1;

	int bufferInt;

	if(resultado !=  NULL && mensajeError != NULL && minimo <= maximo ){


		fflush(stdin);
		if(scanf("%d", &bufferInt) == 1){}

		if(bufferInt >= minimo && bufferInt <=maximo){

			*resultado = bufferInt;

				rtn = 0;
		}else{
			printf("%s",mensajeError);
		}

	}

	return rtn;

}

