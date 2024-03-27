#include <stdio.h>
#include <stdlib.h>

int main() {
	int cod;
	float media_ar, media_pond, n1, n2, n3, p1, p2, p3;
	printf("********************\n");
	printf("*  Menu de Opções  *\n");
	printf("********************\n");
	printf("1 - Média Aritmética\n");
	printf("2 - Média Ponderada\n");
	printf("3 - Sair\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &cod);

	while (cod > 3) {
		printf("Código inválido... Tente novamente\n\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &cod);
	}

	while (cod > 0 && cod <= 3) {

		if (cod == 1) {
			printf("Digite a primeira nota da prova: ");
			scanf("%f", &n1);

			printf("Digite a segunda nota da prova: ");
			scanf("%f", &n2);

			media_ar = (n1 + n2) / 2;

			printf("Média aritmética --> %.2f\n", media_ar);
		}

		if (cod == 2) {
			printf("Digite a primeira nota da prova: ");
			scanf("%f", &n1);

			printf("Digite o peso da prova 1: ");
			scanf("%f", &p1);

			printf("Digite a segunda nota da prova: ");
			scanf("%f", &n2);

			printf("Digite o peso da prova 2: ");
			scanf("%f", &p2);

			printf("Digite a Terceira nota da prova: ");
			scanf("%f", &n3);

			printf("Digite o peso da prova 3: ");
			scanf("%f", &p3);

			media_pond = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

			printf("Média Ponderada --> %.2f\n", media_pond);
		}

		printf("\n");
		printf("********************\n");
		printf("*  Menu de Opções  *\n");
		printf("********************\n");
		printf("1 - Média Aritmética\n");
		printf("2 - Média Ponderada\n");
		printf("3 - Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &cod);

		if (cod == 3) {
			cod = 0;
		}

	}

	system("pause");
	return 0;
}