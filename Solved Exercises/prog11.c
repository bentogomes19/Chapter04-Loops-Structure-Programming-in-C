#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float sal_joao, sal_carlos;
	int meses;

	printf("Digite o salario de carlos: ");
	scanf("%f", &sal_carlos);
	sal_joao = sal_carlos / 3;
	meses = 0;

	while (sal_joao < sal_carlos) { // 450 <  150
		sal_carlos = sal_carlos + (sal_carlos * 0.02);
		sal_joao = sal_joao + (sal_joao * 0.05);
		meses++;
	}

	printf("Quantidade de meses que o salario de joao se iguale ou ultrapasse ao de carlos: %d\n", meses);	


	system("pause");
	return 0;
}