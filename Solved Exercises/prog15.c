#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int i ,id, soma_id, soma_fem, soma_masc, soma_exp, soma_masc1, soma_fem2, menor;
	char sexo, exp;
	float med_exp_masc, perc_masc_45;
	i = 0;
	soma_fem = 0;
	soma_masc = 0;
	soma_exp = 0;
	soma_masc1 = 0;
	soma_fem2 = 0;

	printf("Candidato %d --> Digite a sua idade: ", i+1);
	scanf(" %d", &id);

	while ( id != 0) {
		i++;

		printf("Candidato %d --> Informe seu sexo ( M | F ): ", i);
		scanf(" %c", &sexo);
		sexo=toupper(sexo);
		while (sexo != 'M' && sexo != 'F') {
			printf("Codigo invalido... Tente novamente\n");
			printf("Candidato %d --> Informe seu sexo ( M | F ): ", i);
			scanf("	%c", &sexo);
			sexo=toupper(sexo);
		}
		printf("Candidato %d --> Possui experiencia de servico (S ou N): ", i);
		scanf(" %c", &exp);
		exp=toupper(exp);

		while (exp != 'S' && exp != 'N') {
			printf("Codigo invalido... Tente novamente\n");
			printf("Candidato %d --> Possui experiencia de servico (S ou N): ", i);
			scanf(" %c", &exp);
			exp=toupper(exp);

		}
		if (i == 1) {
			menor = id;
		}

		if (sexo == 'F') {
			soma_fem++;
		}
		else if (sexo == 'M') {
			soma_masc ++;
		}

		if (sexo == 'M' && exp == 'S') {
			soma_exp++;
		}

		if (sexo == 'M' && id > 45 ) {
			soma_masc1 ++;
		}


		if (sexo == 'F' && id < 21 && exp == 'S') {
			soma_fem2++;
		}

		if (id < menor && exp == 'S') {
			menor = id;
		}

		printf("\n\n");
		printf("Candidato %d --> Digite a sua idade: ", i+1);
		scanf(" %d", &id);
	}
	med_exp_masc = (float)soma_exp / soma_masc;
	perc_masc_45 = (float)soma_masc1 / soma_masc;
	printf("\n\n");
	printf("Numero de candidatos do sexo MASCULINO --> %d\n", soma_masc);
	printf("Numero de candidatos do sexo FEMININO --> %d\n", soma_fem);
	printf("Idade media dos homens que ja tem experiencia no servico --> %.2f\n", med_exp_masc);
	printf("A porcentagem dos homens com mais de 45 anos entre o total de homens --> %.2f\n", perc_masc_45);
	printf("O numero de mulheres inferiores a 21 anos e com experiencia de servico --> %d\n", soma_fem2);
	printf("A menor idade entre a mulheres com experiencia --> %d\n", menor);

	printf("\n\n");
	system("pause");
	return 0;
}