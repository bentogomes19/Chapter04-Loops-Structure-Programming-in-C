#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor */

int main() {
	int i, j, n, num, fat;


	printf("Digite um numero n : ");
	scanf("%d", &n);


	for(i=1; i<=n; i++) {
		printf("num : ");
		scanf("%d", &num);
		fat = 1;
		for (j=1; j<=num; j++) {
			fat = fat * j;
		}
		printf("%d ", fat);
	}

	system("pause");
	return 0;
}