#include <stdio.h>
#include <stdlib.h>
/*1. Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
anterior.
Faça um programa que determine o salário atual desse funcionário. */

int main() {
	int ano_atual, i;
	float sal = 1000, sal_atual, sal_ano, aumento;

	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);

	aumento = 0.015; 
	sal_ano = sal + (aumento * sal); 
	for (i = 2007; i <= ano_atual; i++) {
		aumento = aumento * 2;
		sal_atual = sal_ano + aumento * sal_ano; 

	}

	printf("Salario atual %d --> R$ %.2f\n", ano_atual, sal_atual);

	system("pause");
	return 0;
}