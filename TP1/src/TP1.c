/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
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
	int costoMantenimiento;


	// acumuladores
	int acumuladorHospedaje;
	int acumuladorComida;
	int acumuladorTransporte;
	int acumuladorArqueros;
	int acumuladorDefensores;
	int acumuladorMedioCampistas;
	int acumuladorDelanteros;

	// contadores

	int contadorAsia;
	int contadorAfrica;
	int contadorZonaDelNorte;
	int contadorSudamerica;
	int contadorEuropa;
	int contadorOceania;

	// dar valores
	arqueros = 0;
	defensores = 0;
	medioCampistas = 0;
	delanteros = 0;
	costoDeHospedaje =  0;
	costoDeComida = 0;
	costoDeTransporte = 0;


	int banderaMantenimiento;
	int banderaJugadores;
	int banderaRealizarCalculos;


	char respuesta = 's';

	// acumuladores
	acumuladorHospedaje = 0;
	acumuladorComida = 0;
	acumuladorTransporte = 0;
	acumuladorArqueros = 0;
	acumuladorDefensores = 0;
	acumuladorMedioCampistas = 0;
	acumuladorDelanteros = 0;

	// contadores
	contadorAsia = 0;
	contadorAfrica = 0;
	contadorZonaDelNorte = 0;
	contadorSudamerica = 0;
	contadorEuropa = 0;
	contadorOceania = 0;

	// banderas
	banderaMantenimiento = 0;
	banderaJugadores = 0;
	banderaRealizarCalculos = 0;


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
			   "5.Salir\n", acumuladorHospedaje,acumuladorComida,acumuladorTransporte,acumuladorArqueros,acumuladorDefensores,acumuladorMedioCampistas, acumuladorDelanteros );
		obtenerValidacionLetra(&menuPrincipal ,"    Eror deberias ingresar un numero del [1 al 5]" ,1, 5);

		switch(menuPrincipal){
			case 1:
				banderaMantenimiento = 1;
					printf("1 Costo de hospedaje ->\n"
						   "2 Costo de comida  ->\n"
						   "3 Costo de transporte ->\n"
						   "Ingrese una opcion: ");
					obtenerValidacionLetra(&costosDeMantenimientoSubMenu ,"     Eror deberias ingresar un numero del [1 al 3]" ,1, 3);
					switch(costosDeMantenimientoSubMenu){
						case 1:

							retornoNumero = utn_getNumeroBasico(&costoDeHospedaje, "Ingrese el costo de hospedaje", "Error ingreso una letra");
							if(retornoNumero == 0){
								acumuladorHospedaje+=costoDeHospedaje;
								printf("el costo es: %d",costoDeHospedaje);
							}else{
								printf("Hubo un error...");
							}

						break;

						case 2:

							retornoNumero = utn_getNumeroBasico (&costoDeComida, "Ingrese el costo de Comida", "Error ingreso una letra");
								if(retornoNumero == 0){
									acumuladorComida+= costoDeComida;
									printf("el costo es: %d",costoDeComida );
								}else{
									printf("Hubo un error...");
								}

						break;

						case 3:
							retornoNumero = utn_getNumeroBasico (&costoDeTransporte, "Ingrese el costo de Transporte", "Error ingreso una letra");
								if(retornoNumero == 0){
									acumuladorTransporte+=costoDeTransporte;
									printf("el costo es: %d",costoDeTransporte );
								}else{
									printf("Hubo un error...");
								}


						break;


					}


			break;
			case 2:
				banderaJugadores = 1;

					printf("1. Arqueros ->\n"
						   "2. Defendores ->\n"
						   "3. Medio campistas ->\n"
						   "4. Delanteros ->\n"
						   "Ingrese una opcion: ");
					obtenerValidacionLetra(&cargaDeJugadores ,"    Eror deberias ingresar un numero del [1 al 4]" ,1, 4);
					switch(cargaDeJugadores){
						case 1:

							if(acumuladorArqueros != 2 ){
								retornoNumero =  utn_getNumero(&arqueros,"Ingrese a los arqueros", " Error.. Rango validado [0 - 2]", 1, 2);
								if(retornoNumero  == 0){
									printf("La cantidad de arqueros es %d ", arqueros);
									acumuladorArqueros+= arqueros;
								}
							}else{
									printf("   ...Ya esta el total de arqueros...");
							     }
						break;
						case 2:

							if(acumuladorDefensores != 8 ){
								retornoNumero =  utn_getNumero(&defensores,"Ingrese a los defensores", "Error.. Rango validado [1 - 8]", 1, 8);
									if(retornoNumero  == 0){
										printf("La cantidad de defensores son %d ", defensores);
											acumuladorDefensores+= defensores;
									}

							}else{
									printf("   ...Ya esta el total de defensores...");
								 }

						break;
						case 3:
							if(acumuladorMedioCampistas != 8 ){
								retornoNumero =  utn_getNumero(&medioCampistas,"Ingrese a los medioCampistas", "Error.. Rango validado [1 - 8]", 1, 8);
									if(retornoNumero  == 0){
										printf("La cantidad de medioCampistas son %d ", medioCampistas);
										acumuladorMedioCampistas+= medioCampistas;
									}

							}else{
								printf("   ...Ya esta el total de medioCampistas...");
								 }
						break;
						case 4:
							if(acumuladorDelanteros != 4 ){
								retornoNumero =  utn_getNumero(&delanteros,"Ingrese a los delanteros", "Error.. Rango validado [1 - 4]", 1, 4);
									if(retornoNumero  == 0){
										printf("La cantidad de delanteros son %d ", delanteros);
										acumuladorDelanteros+= delanteros;
									}
							}else{
									printf("   ...Ya esta el total de delanteros...");
								 }
						break;
					}

					/*retornoConfederacion = mostrarMenuConfederacion(&confederaciones, &contadorAsia,&contadorAfrica, &contadorZonaDelNorte, &contadorSudamerica ,&contadorEuropa,&contadorOceania);
					if(retornoConfederacion == 0){
						printf("Se guardo correctamente... ");
					}else{
						printf("Error... algo anda mal");
					}*/

			break;
			case 3:
				banderaRealizarCalculos = 1;
					if(banderaMantenimiento == 0 && banderaJugadores == 0){
						printf("Debe ingresar el costo de mantemientos y a los jugadores  para seguir...");
					}

					costoMantenimiento = (acumuladorHospedaje + acumuladorComida + acumuladorTransporte)/ 3;


			break;
			case 4:
				banderaMantenimiento = 0;
				banderaJugadores = 0;
				banderaRealizarCalculos = 0;



					if(banderaMantenimiento == 0 && banderaJugadores == 0 && banderaRealizarCalculos == 0){
						printf("Debe ingresar el costo de mantenimientos, cargar a los jugadores  y por ultimo deberias  realizar todos los calculos para poder seguir...");

					}





			break;
			case 5:
				printf("¿Esta seguro que desea salir? s/n");
				fflush(stdin);
				scanf("%c", &respuesta);

			break;



		}

	}while(respuesta != 'n' );



	if(costoMantenimiento > 0 ){
		printf("El costo es %d", costoMantenimiento);
	}

	return EXIT_SUCCESS;
}

/*respuesta = utn_getCaracter(&letra, "letra?\n","Error la letra debe ser desde A hasta J\n", 'A','J',1);

		if(respuesta == 0){
				printf("La letra  es: %c\n", letra);
			}else{
				printf("\nError");
			}*/
