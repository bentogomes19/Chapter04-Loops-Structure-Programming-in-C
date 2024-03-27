#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, peso, soma_peso = 0, soma_faixa = 0, soma_faixa2 = 0, soma_faixa3 = 0, soma_faixa4 = 0;
	int soma_peso2 = 0, soma_peso3 = 0, soma_peso4 = 0;
	float media1, media2, media3, media4;

	for (i=1; i<=15; i++) {
		printf("\nUsuário %d > Digite a sua idade: ", i);
		scanf("%d", &idade);

		printf("Usuário %d > Digite o seu peso: ", i);
		scanf("%d", &peso);

		if (idade >=1 && idade <= 10) {
			soma_peso += peso;
			soma_faixa++;
			media1 = (float)soma_peso / soma_faixa;
		}
		if (idade>=11 && idade <= 20) {
			soma_peso2 += peso;
			soma_faixa2++;
			media2 = (float)soma_peso2 / soma_faixa2;
		}
		if (idade >= 21 && idade <= 30) {
			soma_peso3 += peso;
			soma_faixa3 ++;
			media3 = (float)soma_peso3 / soma_faixa3;
		}
		if (idade >= 31) {
			soma_peso4 += peso;
			soma_faixa4++;
			media4 = (float)soma_peso4 / soma_faixa4;
		}
	}

		printf("\nMedia Faixa etária 1 a 10 anos: %.2f\n", media1);
		printf("Media Faixa etária 11 a 20 anos: %.2f\n", media2);
		printf("Media Faixa etária 21 a 30 anos: %.2f\n", media3);
		printf("Media Faixa etária de 31 anos para cima: %.2f\n", media4);


	system("pause");
	return 0;
}