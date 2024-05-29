#include <stdio.h>
#include <stdlib.h>

int main() {
	int linhas, colunas;
	int i, j;

	printf("Digite o número de linhas da matriz:\n");
	scanf("%d", &linhas);

	printf("Digite o número de colunas da matriz:\n");
	scanf("%d", &colunas);

	int matriz[linhas][colunas];

	printf("Digite %d números\n", linhas * colunas);
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("Elemento da linha %d coluna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("Imprimindo a matriz:\n");
		for(i = 0; i < linhas; i++){
			for(j = 0; j < colunas; j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}

}

