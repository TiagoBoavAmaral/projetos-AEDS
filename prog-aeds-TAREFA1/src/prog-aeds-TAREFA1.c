/*
 ============================================================================
 Name        : prog-aeds-TAREFA2.c
 Author      : Tiago Boaventura Amaral
 ============================================================================
 */
/*
 * Faça um programa que receba três notas, calcule e mostre a média aritimética entre elas
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double x, y, z, result, cont;
	cont = 1;

for (cont = 1; cont <= 3; cont++) {
		printf("Entre com tres numeros para obter a média entre eles: ");
		fflush(stdout);
		scanf("%lf %lf %lf", &x, &y, &z);

		result = (x + y + z) / 3;

		printf("A média desses tres números é: %lf\n", result);
	}

	return 0;
}

