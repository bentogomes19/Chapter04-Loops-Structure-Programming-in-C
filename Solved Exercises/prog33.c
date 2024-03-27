#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char sexo, resp;
	int i, count1 = 0, count2 = 0, count3 = 0, count4 = 0, soma_homem = 0;
	float perc;
	printf("Pesquisa de opinião Produto DubroVX\n\n");

	for (i=1; i<=10; i++) {

		printf("\nEntrevistado %d > Informe o seu sexo (M ou F) : ", i);
		scanf(" %c", &sexo);
		sexo = toupper(sexo);

		while (sexo != 'M' && sexo != 'F') {
			printf("\nCódigo inválido... tente novamente\n\n");
			printf("\nEntrevistado %d > Informe o seu sexo (M ou F) : ", i);
			scanf(" %c", &sexo);
			sexo = toupper(sexo);
		}

		printf("\nEntrevistado %d > Você gostou do produto S - SIM | N - Não : ", i);
		scanf(" %c", &resp);
		resp = toupper(resp);

		while (resp != 'S' && resp != 'N') {
			printf("\nCódigo inválido... Tente novamente\n\n");
			printf("\nEntrevistado %d > Você gostou do produto S - SIM | N - Não : ", i);
			scanf(" %c", &resp);
			resp = toupper(resp);
		}

		if (resp == 'S') {
			count1 ++;
		}
		else {
			count2 ++;
		}

		if (sexo == 'F' && resp == 'S') {
			count3 ++;
		}
		if (sexo == 'M') {
			if (resp == 'N') {
				count4++;
			}
			soma_homem ++;
		}

	}
	perc = ((float)count4 / soma_homem) * 100;

	printf("\n\n");
	printf("O número de pessoas que responderam SIM: %d\n", count1);
	printf("O número de pessoas que responderam NÃO: %d\n", count2);
	printf("O número de mulheres que responderam SIM: %d\n", count3);
	printf("a percentagem de homens que responderam não, entre todos os homens analisados: %.2f\n", perc);

	system("pause");
	return 0;
}