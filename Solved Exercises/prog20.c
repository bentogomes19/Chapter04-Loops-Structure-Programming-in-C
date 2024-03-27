#include <stdio.h>
#include <stdlib.h>

int main() {
	float  preco_ingresso1, preco_ingresso, despesa, lucro1, lucro;
	int i, vendas_ingresso, ingresso1;
	despesa = 200;
	preco_ingresso1 = 5;
	preco_ingresso = 5;
	vendas_ingresso = 120;
	lucro1 = (preco_ingresso1 * vendas_ingresso) - despesa;
	printf("********************************************************************\n");
	printf("* 	Tabela de valores                                          *\n");
	printf("* Lucros (R$)   ||  Preço Ingresso (R$)  ||  Ingressos Vendidos    *\n");
	printf("********************************************************************\n");
	printf("*     %.2f                 %.2f                %d               *\n", lucro1, preco_ingresso1, vendas_ingresso);
	for (i=1; i<=8; i++) {
		preco_ingresso -= 0.50;
		vendas_ingresso += 26;
		lucro = (preco_ingresso * vendas_ingresso) - despesa;

		printf("*     %.2f                 %.2f                %d               *\n", lucro, preco_ingresso, vendas_ingresso);
	}
	printf("********************************************************************\n");

	system("pause");
	return 0;
}