#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, cod, tipo, n;
	float vlr_investido, rend_mensal, total_investido = 0, total_juros = 0;

	printf("Informe o números de clientes da agência bancária: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		printf("Cliente %d > Informe o seu código: ", i);
		scanf("%d", &cod);

		printf("Tipos de Investimento\n");
		printf("1 - Poupança\n");
		printf("2 - Poupança Plus\n");
		printf("3 - Fundos de renda fixa\n");
		printf("Cliente %d Escolha o tipo de investimento: ", i);
		scanf("%d", &tipo);

		printf("Cliente %d > Informe o valor a ser investido R$: ", i);
		scanf("%f", &vlr_investido);

		if (tipo == 1) { //POUPANÇA
			rend_mensal = 0.015 * vlr_investido;
		}
		if (tipo == 2) { // POUPANÇA PLUS
			rend_mensal = 0.02 * vlr_investido;
		}
		if (tipo == 3) { // FUNDOS DE RENDA FIXA
			rend_mensal = 0.04 * vlr_investido;
		}
		printf("\nRenda mensal do cliente %d será de R$ %.2f\n\n", cod, rend_mensal);

		total_investido += vlr_investido;
		total_juros += rend_mensal;

	}
	printf("\n\nTotal investido pelos clientes : R$ %.2f\n", total_investido);
	printf("Total de juros pagos aos clientes : R$ %.2f\n", total_juros);

	system("pause");
	return 0;
}