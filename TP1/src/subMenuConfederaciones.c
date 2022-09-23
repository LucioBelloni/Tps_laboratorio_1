/*
 * subMenuConfederaciones.c
 *
 *  Created on: 18 sep. 2022
 *      Author: Lucio
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int utn_mostrarMenuConfederacion(int* confederaciones, int* confederacionAsiatica,int* confederacionAfricana, int* confederacionDeNorteAmerica, int* confederacionSudamericana , int* confederacionEuropea,int* confederacionOceania ){

	int contadorAsia;
	int contadorAfrica;
	int contadorZonaDelNorte;
	int contadorSudamerica;
	int contadorEuropa;
	int contadorOceania;
	int retorno = -1;

	contadorAsia = 0;
	contadorAfrica = 0;
	contadorZonaDelNorte = 0;
	contadorSudamerica = 0;
	contadorEuropa = 0;
	contadorOceania = 0;


		if(confederacionAsiatica != NULL && confederacionAfricana != NULL && confederacionDeNorteAmerica != NULL && confederacionSudamericana != NULL && confederacionEuropea != NULL && confederacionOceania != NULL ){

					printf("\n      Ingrese a la confederacion que sea su equipo\n");
					printf("1. AFC ->\n"
						   "2. CAF ->\n"
						   "3. CONCACAF ->\n"
						   "4. CONMEBOL ->\n"
						   "5. UEFA ->\n"
						   "6. OFC ->\n "
						   "Ingrese una opcion: ");
						scanf("%d", confederaciones);
					//obtenerValidacionLetra(&confederaciones ,"Eror deberias ingresar un numero del [1 al 6]" ,1, 6);
			if(*confederaciones <= 6 ){
					switch(*confederaciones){
						case 1:
							 contadorAsia++;
							*confederacionAsiatica = contadorAsia;
						break;
						case 2:
							 contadorAfrica++;
							*confederacionAfricana = contadorAfrica;
							 printf("Cantidad de africanos es: %d", *confederacionAfricana );
						break;
						case 3:
							contadorZonaDelNorte++;
							*confederacionDeNorteAmerica = contadorZonaDelNorte;
						break;
						case 4:
							contadorSudamerica++;
							*confederacionSudamericana = contadorSudamerica;
							printf("Cantidad de subamericano es: %d",contadorSudamerica );
						break;
						case 5:
							 contadorEuropa++;
							*confederacionEuropea = contadorEuropa;
						break;
						case 6:
							 contadorOceania++;
							*confederacionOceania = contadorOceania;
						break;

					}
					retorno = 0;

			}else{

				retorno = -1;
			}
		}
		return retorno;
}
