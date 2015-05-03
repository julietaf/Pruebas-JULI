/*
 ============================================================================
 Name        : Pruebas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************
                ***FUNCIONES***
 ********************************************************************/

char* copiar(char* palabra){

	char* temporal = malloc(sizeof(char) * strlen(palabra) + 1);
	memcpy(temporal,palabra,strlen(palabra));
	temporal [strlen(palabra)] = '\0';
	return temporal;

}


char* string_concat(char* cadena1, char* cadena2){
	/*char** nombres;
	int i;
	nombres = malloc (sizeof(char*)*2);
	nombres[0]=copiar(cadena1);
	nombres[1]=copiar(cadena2);
	for (i=0;i<2;++i)
		printf(*(nombres[i]));*/

	    size_t tamanio1 = strlen(cadena1);
	    size_t tamanio2 = strlen(cadena2);
	    char *resultado = malloc(tamanio1+tamanio2+1);//+1 for the zero-terminator
	    //in real code you would check for errors in malloc here
	    memcpy(resultado, cadena1, tamanio1);
	    memcpy(resultado+tamanio1, cadena2, tamanio2+1);//+1 to copy the null-terminator
	    return resultado;



}


int main(void) {
	//puts("Hola, qué tal?"); /* prints Hello World */
	string_concat("HOLA","JULI!");
	return EXIT_SUCCESS;
}
