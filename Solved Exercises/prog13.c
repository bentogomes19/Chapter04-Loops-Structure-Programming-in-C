#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
		int cod, nr_horas, i;
		char sexo;
		float vlr_hora, sal_bruto, sal_liquido, med_salarios_m, med_salarios_f, desc, soma_masc, soma_fem;
		float total_fem, total_masc;
		i = 0;
		vlr_hora = 30;
		soma_masc = 0;
		soma_fem = 0;
		cod = 0;
		printf("Professor %d --> Digite o codigo do professor (Para encerrar o programa digite 99999): ", i+1);
		scanf("%d", &cod);

		while (cod != 99999) {
			i++;

			printf("Professor %d --> Informe o seu sexo (M ou F): ", i);
			scanf(" %c", &sexo);
			sexo=toupper(sexo);

			while (sexo != 'M' && sexo != 'F') {
				printf("Codigo invalido... tente novamente\n\n");
				printf("Professor %d --> Informe o seu sexo (M ou F): ", i);
				scanf(" %c", &sexo);
				sexo=toupper(sexo);				
				

			}

			printf("Professor %d --> Informe o numero de horas/aula dadas mensalmente: ", i);
			scanf("%d", &nr_horas);

			sal_bruto = vlr_hora * nr_horas;

			if (sexo == 'M') {
				desc = 0.10 * sal_bruto;
				sal_liquido = sal_bruto - desc;
				soma_masc += sal_liquido;
				total_masc++;

			} 
			if (sexo == 'F') {
				desc = 0.05 * sal_bruto;
				sal_liquido = sal_bruto - desc;
				soma_fem += sal_liquido;
				total_fem++;
			}

			printf("Prof #%d seu salario liquido sera de --> R$ %.2f\n", cod, sal_liquido);

			printf("Professor %d --> Digite o codigo do professor (Para encerrar o programa digite 99999): ", i);
			scanf("%d", &cod);

		}

		med_salarios_m = soma_masc / total_masc;
		med_salarios_f = soma_fem / total_fem;
		printf("Media salarial dos professores do sexo masculino --> R$ %.2f\n", med_salarios_m);
		printf("Media salarial dos professores do sexo feminino --> R$ %.2f\n", med_salarios_f);

	system("pause");
	return 0;
}