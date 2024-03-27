#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, qtd_id = 0, qtd_pessoas = 0, soma_peso_40 = 0;
	float peso, altura, media, perc, soma_altura = 0;

	for (i=1; i<=5; i++) {
		printf("Usuário %d > Digite a sua idade: ", i);
		scanf("%d", &idade);

		printf("Usuário %d > Digite a sua altura (m): ", i);
		scanf("%f", &altura);

		printf("Usuário %d > Digite o seu peso (kg): ", i);
		scanf("%f", &peso);

		if (idade > 50) {
			qtd_id ++;
		}
		if (idade >= 10 && idade <= 20) {
			soma_altura += altura;
			qtd_pessoas ++;
		}
		if (peso < 40 ) {
			soma_peso_40 ++;
		}
	}

	media =  soma_altura / qtd_pessoas;
	perc =  ((float)soma_peso_40 / 5) * 100;

	printf("A quantidade de pessoas com idade superior a 50 anos: %d\n", qtd_id);
	printf("A Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", media);
	printf("A porcentagem de pessoas com peso inferior a 40 kg entre todas as analisadas: %.2f\n", perc);
	
	system("pause");
	return 0;
}