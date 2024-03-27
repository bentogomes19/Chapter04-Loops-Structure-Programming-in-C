#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {	
	int i, cod, nht;
	char turno, cat;
	float vlr_hora, sal_min, sal, sal_final, aux_alimentacao;
	sal_min = 450;

	for (i=1; i<=10; i++) {
		printf("Funcionario %d: Digite o seu codigo: ", i);
		scanf("%d", &cod);

		printf("Funcionario %d: Digite o numero de horas trabalhadas no mes: ", i);
		scanf("%d", &nht);

		printf("M - Matutino\n");
		printf("V - Vespertino\n");
		printf("N - Noturno\n");
		printf("Funcionario %d: Informe o turno do trabalho: ", i);
		scanf(" %c", &turno);
		turno=toupper(turno);

		while (turno != 'M' && turno != 'V' && turno != 'N') {
			printf("Codigo invalido tente novamente!!\n");
			printf("Funcionario %d: Informe o turno do trabalho: ", i);
			scanf(" %c", &turno);
			turno=toupper(turno);
		}

		printf("O - Operario\n");
		printf("G - Gerente\n");
		printf("Funcionario %d: Informe a sua categoria: ", i);
		scanf(" %c", &cat);
		cat=toupper(cat);

		while (cat != 'O' && cat != 'G') {
			printf("Codigo invalido tente novamente!!!\n");
			printf("Funcionario %d: Informe a sua categoria: ", i);
			scanf(" %c", &cat);
			cat=toupper(cat);
		}

		if (cat == 'G') {
			if (turno == 'N') {
				vlr_hora = 0.18 * sal_min;
			}
			if (turno == 'M' || turno == 'V') {
				vlr_hora = 0.15 * sal_min;
			}
		}
		else { 
			if (turno == 'N') {
				vlr_hora = 0.13 * sal_min;
			}
			if (turno == 'M' || turno == 'V') {
				vlr_hora = 0.10 * sal_min;
			}
		}

		sal = vlr_hora * nht;

		if (sal < 300) {
			aux_alimentacao =  0.20 * sal;
		}
		if (sal >= 300 && sal < 600) {
			aux_alimentacao = 0.15 * sal;
		}
		if (sal >= 600) {
			aux_alimentacao = 0.05 * sal;
		}

		sal_final = sal + aux_alimentacao;
		printf("\n\n\n");
		printf(" %d - Codigo do Funcionario: %d\n", i, cod);
		printf(" %d - Numero de horas trabalhadas: %d\n", i, nht);
		printf(" %d - Valor da hora trabalhada: R$ %.2f\n", i, vlr_hora);
		printf(" %d - Salario inicial: R$ %.2f\n", i, sal);
		printf(" %d - Auxilio alimentacao: R$ %.2f\n", i, aux_alimentacao);
		printf(" %d - Salario final: R$ %.2f\n", i, sal_final);
		printf("\n\n\n");
	}

	system("pause");
	return 0;
}