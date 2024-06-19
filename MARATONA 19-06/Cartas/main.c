#include <stdio.h>

int main(void) {
    int c1, c2, c3, c4, c5;
    printf("Digite o valor das 5 cartas: ");
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

  //restricao em cada carta
  if (c1 < 1 || c1 > 13) {
      printf("Número fora do intervalo de 1 a 13.\n");
      return 1;
  }

  if (c2 < 1 || c2 > 13) {
      printf("Número fora do intervalo de 1 a 13.\n");
      return 1;
  }

  if (c3 < 1 || c3 > 13) {
      printf("Número fora do intervalo de 1 a 13.\n");
      return 1;
  }

  if (c4 < 1 || c4 > 13) {
      printf("Número fora do intervalo de 1 a 13.\n");
      return 1;
  }

  if (c5 < 1 || c5 > 13) {
      printf("Número fora do intervalo de 1 a 13.\n");
      return 1;
  }
    
  //dando o resultado
  if (c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5) {
        printf("C, Ordem Crescente\n");
    } else if (c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5) {
        printf("D, Ordem Decrescente\n");
    } else {
        printf("N, Nao esta ordenado\n");
    }
    return 0;
}