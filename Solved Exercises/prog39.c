#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade, k;
	float altura, media_altura, soma_altura = 0, soma_id = 0;
	k = 1;
	printf("Usuário %d > Digite a sua idade: ", k);
	scanf("%d", &idade);

	while (idade != 0) {
		k++;

		printf("Usuário %d > Digite a sua altura (m): ", k);
		scanf("%f", &altura);

		if (idade > 50) {
			soma_id++;
			soma_altura += altura;
		}

		printf("Usuário %d > Digite a sua idade: ", k);
		scanf("%d", &idade);

	}

	media_altura = (soma_altura / soma_id);
	printf("Média das alturas das pessoas com mais de 50 anos --> %.2f m\n", media_altura);



	system("pause");
	return 0;
}