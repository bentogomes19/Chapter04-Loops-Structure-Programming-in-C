#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
	int i, nr_op, nr_pecas, total_pecas, n, soma_pecas_homem, soma_pecas_mulher, total_homens, total_mulheres;
	int maior_nr_op, menor_nr_op;
	char sexo;
	float folha_pgto_empresa, sal_minimo, sal_operario, media_pecas_homem, media_pecas_mulher, maior, menor;
	sal_minimo = 1420;
	folha_pgto_empresa = 0;
	total_pecas = 0;
	soma_pecas_homem = 0;
	soma_pecas_mulher = 0;
	total_homens = 0;
	total_mulheres = 0;

	printf("Digite a quantidade de operarios na empresa: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++) {
		printf("\n\n");
		printf("Operario %d : Digite o seu numero: ", i);
		scanf("%d", &nr_op);

		printf("Operario %d : Digite o numero de pecas produzidas neste mes: ", i);
		scanf("%d", &nr_pecas);

		printf("Operario %d : Digite o seu sexo M | F: ");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo=toupper(sexo);

		while (sexo != 'M' && sexo != 'F') {
			printf("Codigo invalido... tente novamente\n\n");
			printf("Operario %d : Digite o seu sexo M | F: ");
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
		}
 
		if (nr_pecas <= 30 ) { // CLASSE 01 
			sal_operario = sal_minimo;
		}
		if (nr_pecas >= 31 && nr_pecas < 50 ) { // CLASSE 02
			sal_operario = sal_minimo + (0.03 * (nr_pecas - 30) * sal_minimo);
		}
		if (nr_pecas >= 50) { // CLASSE 03
			sal_operario = sal_minimo + (0.05 * (nr_pecas - 30) * sal_minimo);
		}

		if (i == 1) {
			maior = sal_operario;
			menor = sal_operario;
		}

		printf("Numero do operario --> %d | Salario --> R$ %.2f\n", nr_op, sal_operario);


		if (sexo == 'M') {
			soma_pecas_homem += nr_pecas;
			total_homens++;
		}
		if (sexo == 'F') {
			soma_pecas_mulher += nr_pecas;
			total_mulheres++;
		}

		if (sal_operario > maior) {
			maior = sal_operario;
			maior_nr_op = nr_op;
		}
		if (sal_operario < menor) {
			menor = sal_operario;
			menor_nr_op = nr_op;
		}

		folha_pgto_empresa+= sal_operario;
		total_pecas +=nr_pecas;

	}
	media_pecas_homem = soma_pecas_homem / total_homens;
	media_pecas_mulher = soma_pecas_mulher / total_mulheres;
	printf("\n\nTotal da folha de pagamento da empresa --> R$ %.2f\n", folha_pgto_empresa);
	printf("Numero total de pecas fabricadas no mes --> %d pecas\n", total_pecas);
	printf("Media de pecas fabricadas pelos homens --> %.2f\n", media_pecas_homem);
	printf("Media de pecas fabricadas pelas mulheres --> %.2f\n", media_pecas_mulher);
	printf("Operario(a) com maior salario --> Numero Operario --> %d | Salario: R$ %.2f\n", maior_nr_op, maior);
	printf("Operario(a) com menor salario --> Numero Operario --> %d | Salario: R$ %.2f\n", menor_nr_op, menor);


	system("pause");
	return 0;
}