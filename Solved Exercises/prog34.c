#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, count, soma_idade = 0;
	float media;
	count = 0;
	printf("Digite a sua idade: 
		");
	scanf("%d", &idade);	

	while (idade != 0) {
		count++;
		soma_idade += idade;

		printf("Digite a sua idade: ");
		scanf("%d", &idade);
	}
	media = (float)soma_idade / count;

	printf("A média das idades informada foi de %.2f\n\n", media);

	system("pause");
	return 0;
}