#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, opiniao, r = 0, k = 0, b = 0, soma_id = 0;
	float media, perc;

	for(i=0; i<=15; i++) {
		printf("Usuário %d > Informe a sua idade: ", i);
		scanf("%d", &idade);

		printf("3 - ÓTIMO\n");
		printf("2 - BOM\n");
		printf("1 - REGULAR\n");
		printf("Usuário %d > O que você achou do filme? 1 2 3: ", i);
		scanf("%d", &opiniao);

		while (opiniao > 3) {
			printf("Codigo inválido... tente novamente\n\n");
			printf("Usuário %d > O que você achou do filme? 1 2 3: ", i);
			scanf("%d", &opiniao);
		}

		if (opiniao == 3) {
			soma_id += idade;
			k++;
		}

		if (opiniao == 1) {
			r++;
		}
		if (opiniao == 2) {
			b++;
		}

	}
	media = (float)soma_id / k;
	perc = ((float)b / 15) * 100;

	printf("\nA média da idade das pessoas que responderam ÓTIMO : %.2f\n", media);
	printf("a quantidade de pessoas que responderam regular : %d\n", r);
	printf("a percentagem de pessoas que responderam bom, entre todos os espectadores analisados : %.2f\n", perc);



	system("pause");
	return 0;
}