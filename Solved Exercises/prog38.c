#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, voto, c1 =0, c2 = 0, c3 = 0, c4 = 0, soma_voto = 0;;
	float perc_nulo, perc_branco, c5 = 0, c6 = 0;
	j = 1;
	printf("*** Eleição Presidencial ***\n");
	printf("1 - Candidato Heleno\n");
	printf("2 - Candidato Maria\n");
	printf("3 - Candidato Suelen\n");
	printf("4 - Candidato Paulo\n");
	printf("5 - Anular voto\n");
	printf("6 - Votar em Branco\n");
	printf("*****************************\n");
	printf("Eleitor %d || Informe o seu voto para presidente: ", j);
	scanf("%d", &voto);

	while (voto != 0) {
		j++;
		while (voto > 6 || voto < 0) {
			printf("Código inválido... Tente novamente\n");
			printf("Eleitor %d || Informe o seu voto para presidente: ", j);
			scanf("%d", &voto);
		}

		if (voto == 1) {
			c1++; // Candidato 01
		}
		if (voto == 2) { 
			c2++; // Candidato 02
		}
		if (voto == 3) {
			c3++; // Candidato 03
		}
		if (voto == 4) {
			c4++; // Candidato 04
		}
		if (voto == 5) {
			c5++; // Total de votos em nulo
		}
		if (voto == 6) {
			c6++; // Total de votos em Branco
		}
		printf("Eleitor %d || Informe o seu voto para presidente: ", j);
		scanf("%d", &voto);
		soma_voto++;
	}
	perc_nulo = (c5 / soma_voto) * 100;
	perc_branco = (c6 / soma_voto) * 100;

	printf("\n******************************\n");
	printf("*      Apuração dos votos   *\n");
	printf("******************************\n");
	printf("Total de votos - Candidato (01) Heleno: %d\n", c1);
	printf("Total de votos - Candidato (02) Maria: %d\n", c2);
	printf("Total de votos - Candidato (03) Suelen: %d\n", c3);
	printf("Total de votos - Candidato (04) Paulo: %d\n", c4);
	printf("Porcentagem de votos nulos sobre o total de votos: %.2f\n", perc_nulo);
	printf("Porcentagem de votos em branco sobre o total de votos: %.2f\n", perc_branco);

	system("pause");
	return 0;
}