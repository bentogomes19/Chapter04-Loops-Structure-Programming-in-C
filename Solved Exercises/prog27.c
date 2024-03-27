#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, soma_idade = 0, soma1 =0, soma2 = 0, soma3 = 0;
	float peso, altura, media_id, perc;
	i = 1;

	while (i <= 5) {
		printf("Pessoa %d -> Digite sua idade: ", i);
		scanf("%d", &idade);

		printf("Pessoa %d -> Digite o seu peso (kgf): ", i);
		scanf("%f", &peso);

		printf("Pessoa %d -> Digite a sua altura (m): ", i);
		scanf("%f", &altura);

		soma_idade += idade;

		if (peso > 90 && altura < 1.50) {
			soma1++;
		}

		if (idade >= 10 && idade <= 30) {
			soma2++;
		}

		if(altura > 1.90) {
			soma3++;
		}

		i++;

	}

	media_id = (float)soma_idade / 5;
	perc = ((float)soma2 / soma3) * 100;
	printf("\n\nA média das idades das 5 pessoas: %.2f\n", media_id);
	printf("a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1.50 metro: %d\n", soma1);
	printf("a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.2f\n", perc);

	system("pause");
	return 0;

}