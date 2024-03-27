#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, primo, j, soma_primo = 0;
for (i=1; i<=10; i++) {
		primo = 1;
		printf("Numero %d -> Digite 10 numeros : ", i);
		scanf("%d", &num);

		if (num > 1) {
			for (j = 2; j < num; j++) {
				if (num % j == 0) {
					primo = 0;
					break;
				}
			}

			if (primo == 1) {
				soma_primo ++;
			}
		}

	}
	printf("Quantidade de números primos: %d\n", soma_primo);

	system("pause");
	return 0;
}