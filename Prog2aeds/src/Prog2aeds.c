/*
 ============================================================================
 Name        : Prog2aeds.c
 Author      : Tiago Boaventura Amaral
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, result, cont;
	cont = 1;

	while (cont <= 3) {
		printf("Entre com os dois numeros para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("O resultado da soma e: %d\n", result);

		cont = cont + 1;
	}

	for (cont = 1; cont <= 3; cont++) {
		printf("Entre com os dois numeros para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("O resultado da soma e: %d\n", result);
	}

	return 0;
}
