#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int i;
	float vlr_trans, soma_trans, soma_p, soma_v, prest;
	char cod;

	for (i=1; i<=15; i++) {

		printf("V - Transação à vista\n");
		printf("P - Transação à Prazo\n");
		printf("Transação %d : Digite o codigo (V ou P): ",i);
		scanf(" %c", &cod);
		cod=toupper(cod);

		while (cod != 'V' && cod != 'P') {
			printf("Codigo inválido... Tente novamente\n\n");
			printf("Transação %d : Digite o codigo (V ou P): ", i);
			scanf(" %c", &cod);
			cod=toupper(cod);
		}

		printf("Transação %d> Digite o valor da Transação (R$): ", i);
		scanf("%f", &vlr_trans);

		if (cod == 'V' ) {
			soma_v += vlr_trans;
		}
		else if ( cod == 'P') {
			soma_p += vlr_trans;
		}
		soma_trans = soma_p + soma_v;
	}

	prest = soma_p / 3;

	printf("O valor total das compras à vista: R$ %.2f\n", soma_v);
	printf("O valor total das compras à prazo: R$ %.2f\n", soma_p);
	printf("O valor total das compras efetuadas: R$ %.2f\n", soma_trans);
	printf("O valor da primeira prestação das compras feitas a prazo: R$ %.2f\n", prest);

	system("pause");
	return 0;
}