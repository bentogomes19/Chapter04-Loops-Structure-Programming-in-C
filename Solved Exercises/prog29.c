#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k, qtd_parcelas, cod, parc, perc;
	float carro, desc, preco_final, vlr_parcela, preco_final_vista;
	k = 0;

	while (k != 10) {
		printf("Digite o preço do carro R$: ");
		scanf("%f", &carro);

		preco_final_vista = carro - (carro * 0.2);
		printf("***********************************************************************************************\n");
		printf("* QUANTIDADE DE PARCELAS             VALOR DA PARCELA                          PREÇO FINAL R$ *\n");
		printf("***********************************************************************************************\n");
		printf("*            0                         R$ 0                             R$ %.2f \n", preco_final_vista);
		printf("-------------------------------------------------------------------------------------------\n");
		perc = 0;
		parc = 0;
		for (i=1; i<=10; i++) {
			parc += 6;
			perc += 3;
			vlr_parcela = (((float)perc / 100) * carro) + carro;
			preco_final =  vlr_parcela * (float)parc;
			printf("*            %d                         R$ %.2f                        R$ %.2f \n", parc, vlr_parcela, preco_final);
			printf("-------------------------------------------------------------------------------------------\n");

		}

		printf("Deseja continuar... Digite 10 para encerrar o programa ou digite 1 para continuar: ");
		scanf("%d", &k);
	}



	system("pause");
	return 0;
}