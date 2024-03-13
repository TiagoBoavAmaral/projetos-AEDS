/*
 ============================================================================
 Name        : prog-aeds-TAREFA.c
 Author      : Tiago Boaventura Amaral
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double salario = 0;
	printf("digite o salario atual: ");
	scanf("%lf", &salario);
	double aumento = salario * 0.25;
	printf("O aumento foi de %lf", aumento);
	printf("\nO novo salario e de: %lf", salario = aumento);
}

