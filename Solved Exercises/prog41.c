#include <stdio.h>
#include <stdlib.h>


int main() {
	int i = 1, n, maior, menor, num;

	printf("Digite um conjunto de números inteiros positivos: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		printf(" %d Digite um número inteiro positivo: ", i);
		scanf("%d", &num);


		while (num < 0) {
			printf("O número deve ser postivo!!!\n\n");
			printf("Digite um número inteiro positivo: ");
			scanf("%d", &num);
		}

		if (i == 1) {
			maior = num;
			menor = num;
		}
		if (num > maior && num != 0 && num > 0) {
			maior = num;
		}
		if (num < menor && num != 0 && num > 0) {
			menor = num;
		}
		if (num==0) {
			break;
		}

	}

	printf("Maior número --> %d\n", maior);
	printf("Menor número --> %d\n", menor);

	system("pause");
	return 0;
}