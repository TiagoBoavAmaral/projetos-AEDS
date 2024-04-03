#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
	return (left >= right) ? 1 : (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
}

int main(void) {
	char palavra[100];
	fflush(stdout);
	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	int tamanho = strlen(palavra);

	//Verificar se e um palindromo
	if(isPalindrome(palavra, 0, tamanho - 1)) {
		printf("A palavra é um palindromo.\n");
	} else {
		printf("A palavra não é um palindromo.\n");
	}

	return 0;
}
