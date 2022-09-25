/*
 * utn.c
 *
 *  Created on: 17 sep. 2022
 *      Author: Lucio
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getNumeroSinMaxNiMin(int* pResultado, char* mensaje, char* mensajeError){

	int retorno = -1;
	int bufferInt;

			printf("%s",mensaje );
			fflush(stdin);
			if(scanf("%d", &bufferInt)== 1){

				if(pResultado != NULL && mensaje != NULL && mensajeError != NULL  ){

							*pResultado = bufferInt;
							retorno = 0;
				}else{
					printf("%s",mensajeError);
					 }
			}else{
				printf("Error..Ingreso una letra");
				 }




			return  retorno;

			}


int utn_getNumeroEnteroConMaxMin(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo){

	int retorno = -1;
	int bufferint;

			printf("%s",mensaje );
			fflush(stdin);
			if(scanf("%d", &bufferint)== 1){
				if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo ){
						if(bufferint >= minimo && bufferint <=maximo){
								*pResultado = bufferint;
								retorno = 0;
						}else{
							printf("%s",mensajeError);
							 }
				}
			}else{
				printf("Error.. Ingreso una letra");
			}


	return  retorno;
}

int utn_getNumeroBasico(int* pResultado, char* mensaje, char* mensajeError){

	int rtn = -1;
	int bufferInt;


		printf("%s",mensaje );
		if(scanf("%d", &bufferInt) == 1){

			if(pResultado != NULL && mensaje != NULL){

				*pResultado = bufferInt;

				rtn =  0;

			}else{
				printf("%s",mensajeError);

				}

		}

	return rtn;
}

int utn_obtenerValidacionLetra(int* resultado, char* mensajeError, int minimo, int maximo){

	int rtn = -1;

	int bufferInt;

		fflush(stdin);
		if(scanf("%d", &bufferInt) == 1){

			if(resultado !=  NULL && mensajeError != NULL && minimo <= maximo ){
					if(bufferInt >= minimo && bufferInt <=maximo){
							*resultado = bufferInt;
							rtn = 0;
					}else{
						printf("%s",mensajeError);
						}
				}
		}else{
			printf("Error ingrese un numero \n");

			}


		return rtn;

}

void utn_obtenerPromedio(float* resultado, int total, int cantidad ){


	if(resultado != NULL ){

		*resultado = (float)cantidad / total;

	}


}



