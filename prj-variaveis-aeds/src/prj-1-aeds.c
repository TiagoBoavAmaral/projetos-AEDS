/*
 ============================================================================
 Name        : prj-variaveis1-aeds.c
 Author      : Tiago Boaventura Amaral
 Description : Primeiro trabalho variaveis AEDS
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {
	int idade = 17;
	const int MAX_NUM = 100;

	printf("Minha variável int comum = %d\n\n", idade);
	printf("Minha variavel int constante = %d\n\n", MAX_NUM);
	printf("Minha constante = %f\n", PI);

	//MAX_NUM = 99;

	return EXIT_SUCCESS;
}
