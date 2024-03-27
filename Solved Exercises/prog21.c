#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idade, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0 , soma = 0;
	float perc1, perc5;
	
	for (i=1; i<=8; i++) {
		printf("Usuario %d --> Informe a sua idade: ", i);
		scanf("%d", &idade);

		if (idade <= 15) {
			f1++;
		}
		else if (idade >= 16 && idade <= 30) {
			f2++;
		}
		else if (idade >= 31 && idade <= 45) {
			f3++;
		}
		else if (idade >= 46 && idade <= 60) {
			f4++;
		}
		else if (idade > 60) {
			f5++;
		}
		soma++;
	}
	perc1 = ((float)f1 / soma) * 100;
	perc5 = ((float)f5 / soma) * 100;
	printf("Total de pessoas divido por faixa etaria\n");
	printf("Faixa Etária 1: %d | Faixa etária 2: %d | Faixa Etária 3: %d| Faixa Etária 4: %d | Faixa Etária 5: %d \n\n", f1, f2, f3, f4, f5);
	
	printf("Percentual de pessoas na faixa etária 01 --> %.2f %\n", perc1);
	printf("Percentual de pessoas na faixa etária 05 --> %.2f %\n", perc5);

	system("pause");
	return 0;
}