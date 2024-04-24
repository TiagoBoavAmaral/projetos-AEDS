#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//declaracao de um array de strings para armazenar tres nomes
	char nomes[3] [30]; //supóndo nomes com ate 30 caracteres

	//solicitar ao usuario para inserir 3 nomes
	for (int i = 0; i < 3; i++) {
		printf("Digite o %d° nome: ", i + 1);
		scanf("%s", nomes[i]);
	}

	//imprimir ons nomes em ordem inversa
	printf("\nNomes na ordem inversa:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%s\n", nomes[i]);
}

	//imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes[i]));
		//%zu e usado para imprimir valores do tipo s:
		//ele e particurlamente util quando voce esta trabalhando com funcoes que retomam valores
		//como strlen, que retorna o comprimento de uma string
	}

	return 0;
}
