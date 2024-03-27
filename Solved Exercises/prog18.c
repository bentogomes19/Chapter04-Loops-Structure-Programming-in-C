#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	float preco_uni, imposto, vlr_transporte, seguro, preco_final;
	char transporte, carga;
	int pais_origem;

	printf("Informe o preço unitário do produto R$: ");
	scanf(" %f", &preco_uni);

	while ((int)preco_uni > 0) {
		printf("*********************************\n");
		printf("* 1 - Estados Unidos da América *\n");
		printf("* 2 - México                    *\n");
		printf("* 3 - Outros                    *\n");
		printf("*********************************\n");
		printf("Informe o país de origem: ");
		scanf(" %d", &pais_origem);

		while (pais_origem > 3) {
			printf("Codigo inválido... Tente novamente\n\n");
			printf("Informe o país de origem: ");
			scanf("%d", &pais_origem);
		}
		printf("*********************************\n");
		printf("*       Meios de Transporte     *\n");
		printf("*       T - Terrestre           *\n");
		printf("*       F - Fluvial             *\n");
		printf("*       A - Aéreo               *\n");
		printf("*********************************\n");
		printf("Informe o meio de transporte  ( T | F | A ): ");
		scanf(" %c", &transporte);
		transporte=toupper(transporte);

		while (transporte != 'T' && transporte != 'F' && transporte != 'A') {
			printf("Código inválido... Tente novamente\n\n");
			printf("Informe o meio de transporte  ( T | F | A ): ");
			scanf(" %c", &transporte);
			transporte=toupper(transporte);
		}

		printf("Seu produto é carga perigosa? (S ou N): ");
		scanf(" %c", &carga);
		carga=toupper(carga);

		while (carga != 'S' && carga != 'N') {
			printf("Codigo inválido... tente novamente\n\n");
			printf("Seu produto é carga perigosa? (S ou N): ");
			scanf(" %c", &carga);
			carga=toupper(carga);
		}

		if (preco_uni <= 100) {
			imposto = 0.05 * preco_uni;
		}
		else if ( preco_uni > 100) {
			imposto = 0.10 * preco_uni;
		}

		printf("Valor do imposto a ser pago no produto --> R$ %.2f\n", imposto);


		if (carga == 'S') {
			if (pais_origem == 1) {
				vlr_transporte = 50;
			}
			else if (pais_origem == 2) {
				vlr_transporte = 21;
			}
			else if (pais_origem == 3) {
				vlr_transporte = 24;
			}

		}
		else if (carga == 'N') {
			if (pais_origem == 1) {
				vlr_transporte = 12;
			}
			else if (pais_origem == 2) {
				vlr_transporte = 21;
			}
			else if (pais_origem == 3) {
				vlr_transporte = 60;
			}
		}

		printf("Valor do tranporte a ser cobrado : R$ %.2f\n", vlr_transporte);

		if ( transporte == 'A' && pais_origem == 2) {
			seguro = preco_uni / 2;
			printf("Valor do seguro a ser pago --> R$ %.2f\n", seguro);
		}
		else {
			seguro = 0;
		}

		preco_final = preco_uni + imposto + vlr_transporte + seguro;
		printf("---------------------------------------\n");
		printf("| Preço final = R$ %.2f            ||\n", preco_final);
		printf("---------------------------------------\n\n\n");
		printf("Informe o preço unitário do produto R$: ");
		scanf(" %f", &preco_uni);
	}

	printf("Preço inválido\n\n");
	system("pause");
	return 0;
}