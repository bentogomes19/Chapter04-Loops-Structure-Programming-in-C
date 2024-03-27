#include <stdio.h>
#include <stdlib.h>

int main() {
	float sal_min, qtd_kw, conta_final, vlr_gasto, vlr_kw, acrescimo, faturamento;
	int i, consumidor, cont_consumidor;
	qtd_kw = 1;
	i = 0;
	faturamento = 0;
	cont_consumidor = 0;
	printf("Digite o valor do salario minimo (R$): ");
	scanf("%f", &sal_min);

	vlr_kw = sal_min / 8;

		printf("Consumidor %d --> Digite a quantidade de quilowatt gasta (Kw): ", i+1);
		scanf("%f", &qtd_kw);

	while (qtd_kw != 0) {
		i++;

		printf("1 - Residencial\n");
		printf("2 - Comercial\n");
		printf("3 - Industrial\n");
		printf("Informe o tipo de consumidor 1 | 2 | 3 | : ");
		scanf("%d", &consumidor);

		while (consumidor > 3) {
			printf("Codigo invalido... Tente novamente\n\n");
			printf("Informe o tipo de consumidor 1 | 2 | 3 | : ");
			scanf("%d", &consumidor);
		}

		vlr_gasto = vlr_kw * qtd_kw;

		if (consumidor == 1) {
			acrescimo = 0.05 * vlr_gasto;
		}
		if (consumidor == 2) {
			acrescimo = 0.10 * vlr_gasto;
		}
		if (consumidor == 3) {
			acrescimo = 0.15 * vlr_gasto;
		}

		conta_final = vlr_gasto + acrescimo;
		printf("Consumidor %d --> Conta Final = R$ %.2f\n", i, conta_final);

		printf("Consumidor %d --> Digite a quantidade de quilowatt gasta (Kw): ", i);
		scanf("%f", &qtd_kw);

		if (conta_final >= 500 && conta_final <= 1000) {
			cont_consumidor++;
		}
		faturamento += conta_final;

	}
	
	printf("Faturamento Geral da empresa = R$ %.2f\n", faturamento);
	printf("Consumidores que pagam entre R$ 500 e R$ 1.000,00 --> %d\n", cont_consumidor);

	system("pause");
	return 0;
}
