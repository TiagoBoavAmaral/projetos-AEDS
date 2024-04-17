//JOAO, LEMBRA DO MEU PONTO EXTRA HEIN KKKKK
//JOAO, LEMBRA DO MEU PONTO EXTRA HEIN KKKKK
//JOAO, LEMBRA DO MEU PONTO EXTRA HEIN KKKKK
//JOAO, LEMBRA DO MEU PONTO EXTRA HEIN KKKKK

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int pPremiada, pEscolhida, pVazia, pNova;
  char soun;

  srand(time(NULL));
  pPremiada = rand() % 3 + 1;

  printf("Bem-vindo ao jogo Monty Hall!\n");
  printf("\nExitem 3 portas, apenas uma é premiada, as outras duas estao vazias.\n");
  printf("Escolha uma porta (1, 2 ou 3):\n");

  scanf("%d", &pEscolhida);

  do {

    pVazia = rand() % 3 + 1;

  } while (pVazia == pEscolhida || pVazia == pPremiada);

  printf("\nA porta %d esta vazia.\n", pVazia);
  printf("\nVocê quer trocar para outra porta? (s/n): \n");

  scanf(" %c", &soun);

  if (soun == 's') {
      do {
          pNova = rand() % 3 + 1;
      } while (pNova == pEscolhida || pNova == pVazia);

    pEscolhida = pNova;

  }

  if (pEscolhida == pPremiada) {

    printf("\nParabéns! Você escolheu a porta certa e ganhou o prêmio! (Porta %d)\n", pEscolhida);

  } else {

    printf("\nInfelizmente você perdeu! A porta premiada era a porta %d.\n", pPremiada);
  }

}
