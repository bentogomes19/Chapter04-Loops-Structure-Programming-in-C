#include <stdio.h>
#include <stdlib.h>

int main() {
	float num, soma, media, maior, menor, media_pares, perc_impares, soma_par;
	int soma_impar, qtd_num, cont_pares;
	num = 0;
	soma = 0;
	qtd_num = 0;
	cont_pares = 0;
	soma_impar = 0;
	soma_par = 0;

	printf("Digite um numero (Para encerrar o programa digite 30000) : ");
	scanf("%f", &num);

	while (num != 30000) {
		soma += num;
		qtd_num++;
		media = soma / qtd_num;
		
		if (qtd_num == 1) {
			maior = num;
			menor = num;
		}

		if (num > maior) {
			maior = num;
		}
		else if (num < menor) {
			menor = num;
		}
		if ((int)num % 2 == 0) {
			soma_par += num;
			cont_pares++;
			media_pares = soma_par / cont_pares;
		}

		else if ((int)num % 2 != 0) {
			soma_impar ++;
			perc_impares = (soma_impar / qtd_num) * 100;
		}

		printf("Digite um numero (Para encerrar o programa digite 30000) : ");
		scanf("%f", &num);
	}
	
	printf("\n\n");
	printf("Soma dos numeros informados --> %.2f\n", soma);
	printf("Quantidade de numeros informados --> %.d\n", qtd_num);
	printf("Media dos numeros digitados --> %.2f\n", media);
	printf("O menor numero informado --> %.2f\n", menor);
	printf("O Maior numero informado --> %.2f\n", maior);
	printf("Media dos numeros pares --> %.2f\n", media_pares);
	printf("Percentual de numeros impares em relacao ao total --> %.2f\n", perc_impares);

	system("pause");
	return 0;
}