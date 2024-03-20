/*
 ============================================================================
 Name        : prog-AEDS-opcoesdepagamento.c
 Description : Programa que solicite o total gasto pelo cliente e mostre as opcoes
 de pagamento e mostre o valor final de cada 1
 a vista = 10 % de desconto
 parcelado 2x = preco da etiqueta
 parcelado de 3x a 10x = com 3% de juros ao mes (somente para compras acima de 300 reais)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	double totalGasto;

	printf("Digite o valor total da compra: ");
	fflush(stdout);
	scanf("%lf", &totalGasto);

	double aVista = totalGasto * 0.9;
	printf("O Valor a vista sera: %.2lf\n", aVista);

	double parcelado = totalGasto / 2;
	printf("O valor parcelado em 2x sera (em cada parcela): %.2lf\n", parcelado);

	return 0;

}

/*
 * CODIGO DO ARAMUNI
 *
 * // Função para calcular o valor total das prestações ou à vista
void calcularPagamento(double totalGasto) {
    int opcaoPagamento;
    double valorFinal;

    while (1) {
        // Mostrar opções de pagamento
        printf("\nOpções de pagamento:\n");
        printf("1 - À Vista (com 10%% de desconto)\n");
        printf("2 - Parcelado 2x (preço da etiqueta)\n");
        printf("3 - Parcelado de 3x até 10x (3%% de juros ao mês, compras acima de R$300.00)\n");
        printf("Digite a opção desejada (ou -999 para encerrar): ");
    	fflush(stdout);
        scanf("%d", &opcaoPagamento);

        if (opcaoPagamento == -999) {
            printf("Programa encerrado.\n");
            break;
        }

        // Calcular o valor final com base na opção de pagamento
        switch (opcaoPagamento) {
            case 1:
                valorFinal = totalGasto * 0.9; // À vista com 10% de desconto
                printf("Valor à vista com desconto: R$%.2lf\n", valorFinal);
                break;
            case 2:
                valorFinal = totalGasto; // Parcelado 2x (preço da etiqueta)
                printf("Valor parcelado em 2x: 2x R$%.2lf\n", valorFinal / 2);
                break;
            case 3:
                // Parcelado de 3x até 10x com 3% de juros ao mês (para compras acima de R$300.00)
                if (totalGasto > 300.00) {
                    int numParcelas;
                    printf("Digite o número de parcelas (3 a 10): ");
                	fflush(stdout);
                    scanf("%d", &numParcelas);

                    if (numParcelas >= 3 && numParcelas <= 10) {
                        valorFinal = totalGasto * (1 + 0.03 * numParcelas);
                        printf("Valor parcelado em %dx: %dx R$%.2lf\n", numParcelas, numParcelas, valorFinal / numParcelas);
                        break;
                    } else {
                        printf("Escolha nova forma de pagamento. ");
                        continue;
                    }
                } else {
                    printf("Escolha nova forma de pagamento. ");
                    continue;
                }
            default:
                printf("Opção inválida. ");
        }
    }
}
//Função para solicitar o total gasto pelo cliente e em seguida chamar a funcão calcularPagamento
void solicitarTotalGasto(){
	double totalGasto;

	    while (1) {
	        // Solicitar o total gasto pelo cliente
	        printf("Digite o total gasto (ou -999 para encerrar): ");
	    	fflush(stdout);
	        scanf("%lf", &totalGasto);

	        if (totalGasto == -999) {
	            printf("Programa encerrado.\n");
	            break;
	        }

	        // Chamar a função para calcular o pagamento
	        calcularPagamento(totalGasto);
	    }
}

int main(void) {
	//Tarefa 2 - Exercício 1
	mostrarNumerosParesMultiplosDeTres();

	//Tarefa 2 - Exercício 2
	calcularSomaEMedia();

	//Tarefa 2 - Exercício 3
	calcularAreaDosComodos();

	//Tarefa 2 - Exercício 4
	calcularPerimetroEAreaDoCirculo();

	//Tarefa 2 - Exercício 5
    	solicitarTotalGasto();

	return 0;
}
 */
