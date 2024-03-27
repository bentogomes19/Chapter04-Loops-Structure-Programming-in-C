#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k;

	for (i=1; i<=10; i++) {
		printf("\n");
		printf("Tabuada do %d\n", i);
		printf("**************\n");

		for (k=0; k<=10; k++) {
			printf("%d x %d = %d\n", i, k, i * k);
		}
	}
	
	system("pause");
	return 0;
}