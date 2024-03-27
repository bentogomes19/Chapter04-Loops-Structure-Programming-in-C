#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
	char cod;
	float preco_compra, preco_venda, lucro, soma_lucro = 0, qtd_acoes1 = 0, qtd_acoes2 = 0;

	printf("Digite o tipo da ação : ");
	scanf(" %c", &cod);
	cod = toupper(cod);

	while (cod != 'F') {
		printf("Ação %c | Digite o preço de compra R$: ", cod);
		scanf(" %f", &preco_compra);

		printf("Ação %c | Digite o preço de venda R$: ", cod);
		scanf(" %f", &preco_venda);

		lucro = preco_compra - preco_venda;
		printf("O lucro da ação %c -> R$ %.2f\n", cod, lucro );
		if (lucro > 1000) {
			qtd_acoes1 ++;
		}
		if (lucro <= 200) {
			qtd_acoes2++;
		}

		printf("\nDigite o tipo da ação : ");
		scanf(" %c", &cod);
		cod = toupper(cod);

		soma_lucro += lucro;

	}
	printf("\n A quantidade de ações com lucro superior a R$ 1.000 --> %.f\n\n", qtd_acoes1);
	printf(" A quantidade de ações com lucro inferior a R$ 200 --> %.f\n\n", qtd_acoes2);
	printf(" Lucro Total da empresa: R$ %.2f\n\n", soma_lucro);

	system("pause");
	return 0;

}