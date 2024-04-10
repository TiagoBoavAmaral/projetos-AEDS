/*
 ============================================================================
 Name        : prog-arquivos-AEDS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//ABRE O ARQUIVO PARA ESCRITA
	FILE *arquivo = fopen("exemplo.txt", "w");

	//VERIFICA SE O ARQUIVO FOI ABERTO COM SUCESSO PARA A ESCRITA
	if (arquivo != NULL) {
		//ESCREVE O TEXTO NO ARQUIVO
		fprintf(arquivo, "Hello World\n");

		//FECHA O AQRQUIVO DE ESCRITA
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");
	} else {
		//SE HOUVER ERRO NA ABERTURA
		printf("Erro ao abrir o arquivo para escrita.\n");
		return 1;
	}

	//ABRE O ARQUIVO PARA LEITURA
	arquivo = fopen("exemplo.txt", "r");

	//VERIFICA SE O ARQUIVO FOI ABERTO COM SUCESSO PARA LEITURA
	if (arquivo != NULL) {
		char linha[100]; //DEFINE UM BUFFER PRA ARMAZENAR A LINHA LIDA

		//LE E IMPRIME CADA LINHA DO ARQUIVO
		while (fgets(linha, sizeof(linha), arquivo) != NULL) {
			printf("Conteudo lido do arquivo: %s", linha);
		}

		//FECHA O ARQUIVO DE LEITURA
		fclose(arquivo);
	} else {
		//SE HOUVER ERRO NA ABERTURA DO ARQUIVO PARA LEITURA
		printf("Erro ao abrir arquivo para leitura.\n");
		return 1; //RETORNA UM CODIGO DE ERRO
	}
	return 0;
}
