#include <stdio.h>
#include <stdlib.h>
/*2. Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

int main() {
	int i, j, n, fat;
	float e;
	e = 1;
	printf("Valor para n: ");
	scanf("%d", &n);

	for (i = 1; i<=n; i++) {
		fat = 1;
		for(j=1; j<=i; j++) {
			fat = fat * j;
		}

	e = e + 1.0 / fat;
	} 

	printf("Valor de E: %.2f\n", e);

	system("pause");
	return 0;
}