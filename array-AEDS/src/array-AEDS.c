#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//exemplo de declaracao e inicializacao de um array de numeros inteiros
	int numeros[5] = { 1, 2, 3, 4, 5 };
	//exemplo de declaracao e inicializacao de um array de strings
	char clubes[] [30] = {"Atletico Mineiro, ", "Athletico Paranaense, ", "Atletico de Madrid." };

	//loop for para percorrer o array e imprimir seus elementos
	printf("Elementos do array de inteiros: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", numeros[i]);
	}

	//loop for para percorrer o array de strings e imprimir os nomes dos clubes
	printf("\nNomes dos clubes: ");
	for(int i = 0; i < 3; i++) {
		printf("%s", clubes[i]);
	}

	return 0;
}
