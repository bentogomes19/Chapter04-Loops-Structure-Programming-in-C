#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int i, n, idade, soma_sal = 0, menor, maior, qtd_mulher = 0, menor_id, menor_sexo, menor_hab;
	float salario, media_sal, menor_sal;
	char sexo;

	printf("Informe o número de habitantes da cidade: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		printf("\nHab %d > Informe a sua idade: ", i);
		scanf("%d", &idade);

		printf("Hab %d > Informe o seu sexo (M ou F): ", i);
		scanf(" %c", &sexo);
		sexo = toupper(sexo);

		while (sexo != 'M' && sexo != 'F') {
			printf("Codigo inválido... tente novamente\n");
			printf("Hab %d > Informe o seu sexo (M ou F): ", i);
			scanf(" %c", &sexo);
			sexo = toupper(sexo);
		}

		printf("Hab %d > Informe o seu salário R$: ", i);
		scanf("%f", &salario);

		if (i==1) {
			maior = idade;
			menor = idade;
			menor_id = idade;
			menor_sexo = sexo;
			menor_sal = salario;
			menor_hab = i;
		}

		if (idade > maior) {
			maior = idade;
		}

		if (idade < menor) {
			menor = idade;
		}

		if (salario < menor_sal) {
			menor_id = idade;
			menor_sexo = sexo;
			menor_sal = salario;
			menor_hab = i;
		}


		if (sexo == 'F') {
			if (salario <= 200) {
				qtd_mulher++;
			}
		} 

		soma_sal += salario;
	}
	
	media_sal = (float)soma_sal / n;
	printf("\nA média salario dos Habitantes R$ %.2f\n", media_sal);
	printf("A Maior idade = %d | A menor idade = %d\n", maior, menor);
	printf("A quantidade de mulheres que receber até R$ 200,00 = %d\n", qtd_mulher);
	printf("Habitante %d | Idade = %d | Sexo = %c possui o menor salário R$ %.2f\n", menor_hab, menor_id, menor_sexo, menor_sal);

	system("pause");
	return 0;
}