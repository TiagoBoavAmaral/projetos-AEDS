#include <stdio.h>

int main(void) {

  char direcao_atual, direcao_oasis;
  int angulo;

  printf("Digite a direção atual do seu amigo (N, S, L, O): ");
  scanf(" %c", &direcao_atual);

  printf("Digite a direção do oásis (N, S, L, O): ");
  scanf(" %c", &direcao_oasis);

  if (direcao_atual == direcao_oasis) {
    angulo = 0;

  } else if (direcao_atual == 'N' && direcao_oasis == 'L') {
    angulo = 90;
  } else if (direcao_atual == 'N' && direcao_oasis == 'O') {
    angulo = 90;
  } else if (direcao_atual == 'N' && direcao_oasis == 'O') {
    angulo = 180;

  } else if (direcao_atual == 'S' && direcao_oasis == 'L') {
    angulo = 90;
  } else if (direcao_atual == 'S' && direcao_oasis == 'O') {
    angulo = 90; 
  } else if (direcao_atual == 'S' && direcao_oasis == 'N') {
    angulo = 180;

  } else if (direcao_atual == 'L' && direcao_oasis == 'N') {
    angulo = 90;
  } else if (direcao_atual == 'L' && direcao_oasis == 'S') {
    angulo = 90;
  } else if (direcao_atual == 'L' && direcao_oasis == 'O') {
    angulo = 180;

  } else if (direcao_atual == 'O' && direcao_oasis == 'N') {
    angulo = 90;
  } else if (direcao_atual == 'O' && direcao_oasis == 'S') {
    angulo = 90;
  } else if (direcao_atual == 'O' && direcao_oasis == 'L') {
    angulo = 180;
  }

  printf("O ângulo mínimo para chegar ao oásis é: %d graus\n", angulo);

  return 0;
}
