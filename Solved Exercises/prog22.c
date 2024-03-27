#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for (i=0; i<=10; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	system("pause");
	return 0;
}