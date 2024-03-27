#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, num, soma_par = 0, soma_primo = 0, primo;

	for (i=1; i<=10; i++) {
		primo = 1;
		printf("Numero %d -> Digite 10 numeros : ", i);
		scanf("%d", &num);

		if (num % 2 == 0) {
			soma_par += num;
		}

		if (num > 1) {
			for (j = 2; j < num; j++) {
				if (num % j == 0) {
					primo = 0;
					break;
				}
			}

			if (primo == 1) {
				soma_primo += num;
			}
		}

	}
	printf("A soma dos números pares: %d\n", soma_par);
	printf("A soma dos números primos: %d\n", soma_primo);

	system("pause");
	return 0;
}