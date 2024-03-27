#include <stdio.h>
#include <stdlib.h>

int main() {
	int op, meses;
	float sal, novo_sal, vlr_ferias, decimo, vlr_decimo, aumento;


	printf("******************************\n");
	printf("**       MENU DE OPÇÕES     **\n");
	printf("******************************\n");
	printf("*     1 - Novo salário       *\n");
	printf("*     2 - Férias             *\n");
	printf("*     3 - Décimo Terceiro    *\n");
	printf("**    4 - Sair              **\n");
	printf("******************************\n");
	printf("Digite a opção selecionada: ");
	scanf("%d", &op);

	while (op > 4) {
		printf("Código inválido... tente novamente\n\n");
		printf("Digite a opção selecionada: ");
		scanf("%d", &op);
	}
	
	while (op <= 4) {

		if (op == 1) {
			printf("Digite o seu salário (R$): ");
			scanf("%f", &sal);

			if (sal < 210) {
				aumento = 0.15 * sal;
				novo_sal = sal + aumento;
			}
			if (sal >= 210 && sal <= 600) {
				aumento = 0.10 * sal;
				novo_sal = sal + aumento;
			}
			if (sal > 600) {
				aumento = 0.05 * sal;
				novo_sal = sal + aumento;
			}
			printf("Seu aumento será de R$ %.2f --> Novo salário R$: %.2f\n", aumento, novo_sal);
		} 

		if (op == 2) {
			sal = 0;
			printf("Digite o seu salário (R$): ");
			scanf("%f", &sal);

			vlr_ferias = sal + (sal/3);
			printf("O valor das suas férias R$ %.2f\n", vlr_ferias);

		}

		if (op == 3) {
			sal = 0;
			printf("Digite o seu salário (R$): ");
			scanf("%f", &sal);

			printf("Digite o número de meses trabalhado na empresa MÁX 12: ");
			scanf("%d", &meses);

			while (meses > 12) {
				printf("Você inseriu uma quantidade superior de meses... MÁX 12 meses\n\n");
				printf("Digite o número de meses trabalhado na empresa MÁX 12: ");
				scanf("%d", &meses);
			}

			decimo = (sal * meses) / 12;
			printf("O valor do seu décimo terceiro será de: R$ %.2f\n", decimo);

		}

		if (op == 4) {
			break;
		}
		printf("******************************\n");
		printf("**       MENU DE OPÇÕES     **\n");
		printf("******************************\n");
		printf("*     1 - Novo salário       *\n");
		printf("*     2 - Férias             *\n");
		printf("*     3 - Décimo Terceiro    *\n");
		printf("**    4 - Sair              **\n");
		printf("******************************\n");
		printf("Digite a opção selecionada: ");
		scanf("%d", &op);

	}

	while (op > 4) {
		printf("Código inválido... tente novamente\n\n");
		printf("Digite a opção selecionada: ");
		scanf("%d", &op);
	}

	system("pause");
	return 0;
}