#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int i, n, tempo_vida;
	char sexo;
	float perc_fem, perc_masc, perc_vida, total_fem, total_masc, total_vida;
	total_fem = 0;
	total_masc =0;
	total_vida = 0;

	printf("Digite o numero de criancas nascidas no periodo: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		printf("Crianca 0%d --> Informe o seu sexo M | F: ", i);
		fflush(stdin);
		scanf("%c", &sexo);
		sexo=toupper(sexo);

		while (sexo != 'M' && sexo != 'F') {
			printf("Codigo invalido... tente novamente\n\n");
			printf("Crianca 0%d --> Informe o seu sexo M | F: ", i);
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
		}

		printf("Crianca 0%d --> Informe o tempo de vida (Meses): ", i);
		scanf("%d", &tempo_vida);

		if (sexo == 'M') {
			total_masc++;

		}
		if (sexo == 'F') {
			total_fem++;
		}
		if (tempo_vida <= 24) {
			total_vida++;
		}

	}
	perc_masc = (total_masc / n) * 100;
	perc_fem = (total_fem / n) * 100;
	perc_vida = (total_vida / n) * 100;

	printf("\n\nPorcentagem de criancas do sexo masculino mortas no periodo: %.2f\n", perc_masc);
	printf("\nPorcentagem de criancas do sexo feminino mortas no periodo: %.2f\n", perc_fem);
	printf("\nPorcentagem de criancas que viveram 24 meses ou menos no periodo: %.2f\n", perc_vida);




	system("pause");
	return 0;
}