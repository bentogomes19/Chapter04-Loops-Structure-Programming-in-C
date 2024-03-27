#include <stdio.h>
#include <stdlib.h>

int main() {

	int op;
	float sal, imposto, novo_sal;

	printf("**************************\n");
	printf("*      Menu de opções:   *\n");
	printf("**************************\n");
	printf("1 - Imposto\n");
	printf("2 - Novo Salário\n");
	printf("3 - Classificação\n");
	printf("4 - Finalizar o Programa\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &op);

	while (op < 4) {

		printf("Digite o seu salario R$: ");
		scanf("%f", &sal);

		if (op == 1) {
			if (sal < 500 ) {
			imposto = 0.05 * sal;
			}
			if (sal >= 500 && sal <= 850) {
				imposto = 0.10 * sal;
			}
			if (sal > 850) {
				imposto = 0.15 * sal;
			}

			printf("imposto a ser cobrado do salário de R$ %.2f --> R$ %.2f\n\n", sal, imposto);
		}

		if (op == 2) {
			if (sal > 1500) {
				novo_sal = sal + 25;
			}

			else if (sal >= 750 && sal <= 1500) {
				novo_sal = sal + 50;
			}

			else if (sal >= 450 && sal < 750) {
				novo_sal = sal + 75;
			}
			else if (sal <= 450) {
				novo_sal = sal + 100;
			}

			printf("Antigo salário --> R$ %.2f | Novo salario R$ %.2f\n\n", sal, novo_sal);
		}


		if (op == 3) {
			if (sal <= 700) {
				printf("Classificação --> Mal remunerado!!\n\n");
			}
			else if (sal > 700) {
				printf("Classificação --> Bem remunerado!!\n\n");
			}
		}

		printf("**************************\n");
		printf("*      Menu de opções:   *\n");
		printf("**************************\n");
		printf("1 - Imposto\n");
		printf("2 - Novo Salario\n");
		printf("3 - Classificação\n");
		printf("4 - Finalizar o Programa\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &op);

	}

	printf("Program Encerrado!!!\n");



	system("pause");
	return 0;
}