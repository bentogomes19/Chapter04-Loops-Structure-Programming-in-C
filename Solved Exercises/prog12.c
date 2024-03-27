#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float num , quadrado, cubo,  raiz;
	num = 1;

	while (num > 0) {
		quadrado = 0;
		cubo = 0;
		raiz = 0;
		printf("Digite um conjunto de numeros: ");
		scanf("%f", &num);

		quadrado += pow(num, 2);
		cubo += pow(num, 3);
		raiz += sqrt(num);
		printf("O quadrado de %.2f = %.2f\n", num, quadrado);
		printf("O cubo de %.2f = %.2f\n", num, cubo);
		printf("A raiz de %.2f = %.2f\n", num, raiz);

	}


	system("pause");
	return 0;

}