#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcao para lancar um dado
int rolarDado() {
	return rand() % 6 + 1; //gera um numero aleatorio entre 1 e 6
}

//funcao para calcular a soma dos valores dos dados
int calcularSoma(int dado1, int dado2) {
	return dado1 + dado2;
}

int main(void) {
	int jogador1[2], jogador2[2];
	int somaJogador1, somaJogador2;
	srand(time(NULL)); //semente para a funcao rand()

	printf("Jogador 1, pressione ENTER para rolar os dados.\n");
	getchar(); //espera o jog 1 pressionar enter
	jogador1[0] = rolarDado(); //lanca o primeiro dado
	jogador1[1] = rolarDado(); //lanca o segundo dado

	printf("Jogador 1: %d + %d\n", jogador1[0], jogador1[1]);
	somaJogador1 = calcularSoma(jogador1[0], jogador1[1]);
	printf("Soma do Jogador 1: %d\n", somaJogador1);

	printf("\nJogador 2, pressione ENTER para rolar os dados.\n");
		getchar(); //espera o jog 2 pressionar enter
		jogador2[0] = rolarDado(); //lanca o primeiro dado
		jogador2[1] = rolarDado(); //lanca o segundo dado

		printf("Jogador 2: %d + %d\n", jogador2[0], jogador2[1]);
		somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
		printf("Soma do Jogador 2: %d\n", somaJogador2);

		if(somaJogador1 > somaJogador2) {
			printf("O Jogador 1 Venceu!");
		} else if(somaJogador1 < somaJogador2) {
			printf("O Jogador 2 Venceu!");
		} else {
			printf("Empate!");
		}
			return 0;
}
