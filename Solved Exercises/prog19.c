#include <stdio.h>
#include <stdlib.h>

int main() {
	int  n1,n2,n3,n4;
	int i;

	for (i=1; i<=5; i++) {

		printf("\nGrupo %d --> Digite um valor n1: ", i);
		scanf("%d", &n1);

		printf("Grupo %d --> Digite um valor n2: ", i);
		scanf("%d", &n2);

		printf("Grupo %d --> Digite um valor n3: ", i);
		scanf("%d", &n3);

		printf("Grupo %d --> Digite um valor n4: ", i);
		scanf("%d", &n4);

		printf("Numeros Informados: %d -> %d -> %d -> %d\n\n", n1, n2, n3, n4);

		if (n1 > n2 && n2 > n3 && n3 > n4) { //ordem decrescente
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n1, n2, n3, n4);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n4, n3, n2, n1);
		}
		else if (n1 < n2 && n2 < n3 && n3 < n4) { //ordem decrescente
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n4, n3, n2, n1);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n1, n2, n3, n4);
		}
		else if (n1 > n2 && n2 < n3 && n3 > n4) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n3, n1, n4, n2);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n2, n4, n1, n3);
		}
		else if (n1 > n2 && n2 > n3 && n4 > n3) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n1, n2, n4, n3);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n3, n4, n2, n1);
		}
		else if (n2 > n1 && n4 > n3 & n1 > n3) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n2, n1, n4, n3);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n3, n4, n1, n2);
		}
		else if (n1 == n2 && n2 == n3 && n3 == n4) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n2, n1, n4, n3);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n3, n4, n1, n2);
		}
		else if (n3 > n2 && n2 > n1 && n1 > n4) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n3, n2, n1, n4);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n4, n1, n2, n3);
		}
		else if (n3 > n4 && n4 > n2 && n2 > n1 ) {
			printf("Ordem Decrescente: %d -> %d -> %d -> %d\n", n3, n4, n2, n1);
			printf("Ordem Crescente: %d -> %d -> %d -> %d\n", n1, n2, n4, n3);
		}
 
	}

	system("pause");
	return 0;
}
