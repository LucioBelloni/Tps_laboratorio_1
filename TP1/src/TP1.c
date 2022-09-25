/*
 ============================================================================
 Name        : TP1.c
 Author      : Belloni Lucio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"
#include "subMenuConfederaciones.h"


int main(void) {
	setbuf(stdout, NULL);

	int menuPrincipal;
	int cargaDeJugadores;
	int costosDeMantenimientoSubMenu;
	int costoDeHospedaje;
	int costoDeComida;
	int costoDeTransporte;
	int arqueros;
	int defensores;
	int medioCampistas;
	int delanteros;
	int retornoNumero;
	int confederaciones;
	int retornoConfederacion;
	int costoMantenimientoTotal;
	int camiseta;
	int jugadoresTotales;
	int CostoDeMantenientoEuropeoAumento;
	int CostoDeMantenientoFinalEuropeoAumento;
	float promedioAsia;
	float promedioAfrica;
	float promedioZonaDelNorte;
	float promedioSudamerica;
	float promedioEuropa;
    float promedioOceania;
    int retornoCostosDeMantenimientoSubMenu;
    int retornoCargaDeJugadores;
    int retornoNumeroEntero;






	// acumuladores
	int acumuladorHospedaje;
	int acumuladorComida;
	int acumuladorTransporte;



	// contadores

	int contadorAsia;
	int contadorAfrica;
	int contadorZonaDelNorte;
	int contadorSudamerica;
	int contadorEuropa;
	int contadorOceania;
	int contadorArqueros;
	int contadorDefensores;
	int contadorMedioCampistas;
	int contadorDelanteros;

	// dar valores
	arqueros = 0;
	defensores = 0;
	medioCampistas = 0;
	delanteros = 0;
	costoDeHospedaje =  0;
	costoDeComida = 0;
	costoDeTransporte = 0;
	promedioAsia = 0;
	promedioAfrica = 0;
	promedioZonaDelNorte = 0;
	promedioSudamerica = 0;
	promedioEuropa = 0;
	promedioOceania = 0;
	costoMantenimientoTotal = 0;
	CostoDeMantenientoEuropeoAumento = 0;
	CostoDeMantenientoFinalEuropeoAumento = 0;


	char respuesta = 'n';

	// acumuladores
	acumuladorHospedaje = 0;
	acumuladorComida = 0;
	acumuladorTransporte = 0;



	// contadores
	contadorAsia = 0;
	contadorAfrica = 0;
	contadorZonaDelNorte = 0;
	contadorSudamerica = 0;
	contadorEuropa = 0;
	contadorOceania = 0;
	contadorArqueros = 0;
	contadorDefensores = 0;
	contadorMedioCampistas = 0;
	contadorDelanteros = 0;


	int banderaMantenimiento;
	int banderaJugadores;
	int banderaRealizarCalculos;
	int banderaMantenimientoEuropeo;

	// banderas
	banderaMantenimiento = 0;
	banderaJugadores = 0;
	banderaRealizarCalculos = 0;
	banderaMantenimiento = 0;
	banderaMantenimientoEuropeo = 0;


	do{




		printf("\n       Menu principal\n"
				"\n");
		printf("1. Ingreso de los costos de mantenimiento\n"
				" Costo de Hospedaje  -> $%d\n"
				" Costo de Comida ->$%d \n"
				" Costo de Transporte -> $%d\n"
			   "2.Carga de jugadores\n"
			   " Arqueros -> %d \n"
			   " Defensores-> %d\n"
			   " Mediocampistas ->%d\n"
			   " Delanteros-> %d\n"
			   "3.Realizar todos los calculos\n"
			   "4.Informar todos los resultados\n"
			   "5.Salir\n", acumuladorHospedaje,acumuladorComida,acumuladorTransporte,contadorArqueros,contadorDefensores,contadorMedioCampistas, contadorDelanteros );
			utn_obtenerValidacionLetra(&menuPrincipal ,"   Eror deberias ingresar un numero del [1 al 5]\n" ,1, 5);

		switch(menuPrincipal){
			case 1:
				banderaMantenimiento = 1;

				retornoCostosDeMantenimientoSubMenu =  utn_getNumeroEnteroConMaxMin( &costosDeMantenimientoSubMenu , "1 Costo de hospedaje ->\n"
							       	   	   	   	   	   	   	   	   	   	   	   								"2 Costo de comida  ->\n"
																											"3 Costo de transporte ->\n"
																			   								"Ingrese una opcion: ", "Eror deberias ingresar un numero del [1 al 3]", 1, 3);
				if(retornoCostosDeMantenimientoSubMenu == 0){
						switch(costosDeMantenimientoSubMenu){
						case 1:

							retornoNumero = utn_getNumeroSinMaxNiMin(&costoDeHospedaje, "Ingrese el costo de hospedaje", "Error ingreso una letra");
								if(retornoNumero == 0){
									acumuladorHospedaje+=costoDeHospedaje;
									printf("el costo es: %d",costoDeHospedaje);
								}else{
									printf("Error");
									 }
						break;
						case 2:
							retornoNumero = utn_getNumeroSinMaxNiMin(&costoDeComida, "Ingrese el costo de Comida", "Error ingreso una letra");
								if(retornoNumero == 0){
									acumuladorComida+= costoDeComida;
									printf("el costo es: %d",costoDeComida );
								}else{
									printf("Error ingreso una letra");
								}
						break;
						case 3:
							retornoNumero = utn_getNumeroSinMaxNiMin(&costoDeTransporte, "Ingrese el costo de Transporte", "Error ingreso una letra");
								if(retornoNumero == 0){
									acumuladorTransporte+=costoDeTransporte;
									printf("el costo es: %d",costoDeTransporte);
								}else{
									printf("Error ingreso una letra");
								}
						break;

					}
				}
			break;
			case 2:

				banderaJugadores = 1;

				 	  retornoCargaDeJugadores =   utn_getNumeroEnteroConMaxMin(&cargaDeJugadores , "1. Arqueros ->\n"
							   	   	   	   	   	   	   	   								  "2. Defendores ->\n"
							   	   	   	   	   	   	   	   	                              "3. Medio campistas ->\n"
				 											                              "4. Delanteros ->\n"
							   	   	   	   	   	   	   	   	                              "Ingrese una opcion: ", "    Error deberias ingresar un numero del [1 al 4]\n", 1, 4);
				 if(retornoCargaDeJugadores == 0){
					 switch(cargaDeJugadores){
							case 1:
								if(arqueros < 2 ){
									retornoNumeroEntero = utn_getNumeroEnteroConMaxMin(&camiseta, "Ingrese el numero de su camiseta", " Error ingreso un numero mayor a 100", 1,99);
										if(retornoNumeroEntero == 0){
											retornoConfederacion = utn_mostrarMenuConfederacion(&confederaciones, &contadorAsia,&contadorAfrica, &contadorZonaDelNorte, &contadorSudamerica ,&contadorEuropa,&contadorOceania);
											if(retornoConfederacion == 0){
												contadorArqueros++;
												printf("Se guardo correctamente...  ");
											}

										}
								 }else{
									printf("... Ya estan el total de los arqueros ...");
								}

							arqueros = contadorArqueros;
							break;
							case 2:

								if(defensores < 8 ){
										retornoNumeroEntero = utn_getNumeroEnteroConMaxMin(&camiseta, "Ingrese el numero de su camiseta", " Error ingreso un numero mayor a 100", 1,99);
												if(retornoNumeroEntero == 0){

													retornoConfederacion = utn_mostrarMenuConfederacion(&confederaciones, &contadorAsia,&contadorAfrica, &contadorZonaDelNorte, &contadorSudamerica ,&contadorEuropa,&contadorOceania);
														if(retornoConfederacion == 0){
															contadorDefensores++;
															printf("Se guardo correctamente...");
														}

														defensores = contadorDefensores;

												}

								}else{
									printf("... Ya estan el total de los defensores ...");
									 }




							break;
							case 3:
								if(medioCampistas < 8 ){
										retornoNumeroEntero = 	utn_getNumeroEnteroConMaxMin(&camiseta, "Ingrese el numero de su camiseta", " Error ingreso un numero mayor a 100", 1,99);
											if(retornoNumeroEntero == 0){

												retornoConfederacion = utn_mostrarMenuConfederacion(&confederaciones, &contadorAsia,&contadorAfrica, &contadorZonaDelNorte, &contadorSudamerica ,&contadorEuropa,&contadorOceania);
													if(retornoConfederacion == 0  ){
														contadorMedioCampistas++;
														printf("Se guardo correctamente...  ");
													}
											}


								}else{
									printf("   ...Ya esta el total de medioCampistas...");
									}

							medioCampistas = contadorMedioCampistas;

							break;
							case 4:
								if(delanteros < 4 ){

									retornoNumeroEntero =  utn_getNumeroEnteroConMaxMin(&camiseta, "Ingrese el numero de su camiseta", " Error ingreso un numero mayor a 100", 1,99);
										if(retornoNumeroEntero == 0 ){

											retornoConfederacion = utn_mostrarMenuConfederacion(&confederaciones, &contadorAsia,&contadorAfrica, &contadorZonaDelNorte, &contadorSudamerica ,&contadorEuropa,&contadorOceania);
												if(retornoConfederacion == 0){
													contadorDelanteros++;
													printf("Se guardo correctamente...  ");
												}

										}

								}else{
									printf("   ...Ya esta el total de delanteros...");
								 }

								delanteros = contadorDelanteros;
					}
				 }
			break;
			case 3:
					if(banderaMantenimiento == 1 && banderaJugadores == 1){
						banderaRealizarCalculos = 1;
							costoMantenimientoTotal = acumuladorHospedaje + acumuladorComida + acumuladorTransporte;

							jugadoresTotales =  contadorDelanteros + contadorMedioCampistas + contadorDefensores + contadorArqueros;

							 utn_obtenerPromedio(&promedioAsia, jugadoresTotales, contadorAsia);
							 utn_obtenerPromedio(&promedioAfrica, jugadoresTotales, contadorAfrica);
							 utn_obtenerPromedio(&promedioZonaDelNorte, jugadoresTotales, contadorZonaDelNorte);
							 utn_obtenerPromedio(&promedioSudamerica, jugadoresTotales, contadorSudamerica);
							 utn_obtenerPromedio(&promedioEuropa, jugadoresTotales, contadorEuropa);
							 utn_obtenerPromedio(&promedioOceania, jugadoresTotales, contadorOceania);

					if( contadorEuropa > contadorAsia && contadorEuropa > contadorAfrica && contadorEuropa > contadorZonaDelNorte &&  contadorEuropa > contadorSudamerica && contadorEuropa > contadorOceania  ){

							CostoDeMantenientoEuropeoAumento = (costoMantenimientoTotal * 0.35) / 100;
							CostoDeMantenientoFinalEuropeoAumento =  costoMantenimientoTotal  + CostoDeMantenientoEuropeoAumento;
							banderaMantenimientoEuropeo = 1;
					}


							 printf("se realizo todos los calculos");

					}else{

						printf("Debe ingresar el costo de mantemientos y a los jugadores  para seguir...");
					}

			break;
			case 4:
					if(banderaMantenimiento == 1 && banderaJugadores == 1 && banderaRealizarCalculos == 1){

							printf("   Informar todos los Resultados\n"
								"Promedio Uefa %.2f\n"
								"Promedio Conmebol %.2f\n"
								"Promedio Concacaf %.2f\n"
								"Promedio Afc %.2f\n"
								"Promedio Ofc %.2f\n"
								"Promedio Caf %.2f\n",promedioEuropa,promedioSudamerica,promedioZonaDelNorte,promedioAsia,promedioOceania,promedioAfrica);

						if(banderaMantenimientoEuropeo == 1){
								printf("el costo de mantenimiento era de %d y recibio un aumento de $ %d , su nuevo valor es de $%d: ",costoMantenimientoTotal,CostoDeMantenientoEuropeoAumento,CostoDeMantenientoFinalEuropeoAumento);
						}else{
							printf("El costo total es de $%d", costoMantenimientoTotal );
							 }



				}else{
					printf("Debe ingresar el costo de mantenimientos, cargar a los jugadores  y por ultimo deberias  realizar todos los calculos para poder seguir...");
					}







			break;
			case 5:
				printf("¿Esta seguro que desea salir? s/n");
				fflush(stdin);
				scanf("%c",&respuesta);
			break;

		  }

	}while(respuesta != 's' );

	return EXIT_SUCCESS;
}

