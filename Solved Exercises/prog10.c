#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float vlr_divida, juros, parcela, valor_parcela, valor_juro_divida, valor_juros;
	parcela = 1;
	juros = 0;

	printf("Informe o valor da divida R$: ");
	scanf("%f", &vlr_divida);

	printf("*********************************************************************************\n");
	printf("* Valor da Divida * Valor dos Juros * Quantidade de parcelas *  Valor da parcela*\n");
	printf("*********************************************************************************\n");
	printf("%.2f		0 		1 		R$ %.2f\n", vlr_divida, vlr_divida);
	juros += 10;
	parcela += 2;
	for (i=1; i<=4; i++) {
		valor_juros = (juros / 100) * vlr_divida;
		valor_juro_divida = valor_juros + vlr_divida;
		valor_parcela = valor_juro_divida / parcela;
		printf("%.2f		%.2f		%.2f		R$ %.2f\n",valor_juro_divida ,valor_juros, parcela ,valor_parcela);
		juros += 5;
		parcela += 3;
	}


	system("pause");
	return 0;

}