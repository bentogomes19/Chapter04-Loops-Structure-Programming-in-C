#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float n1, n2, med, med_classe, med_soma;
	int aprovado, exame, reprovado;
	med_soma = 0;
	aprovado = 0;
	reprovado = 0;
	exame = 0;

	for (i=1; i<=6; i++) {
		printf("Aluno %d --> Digite sua primeira nota: ", i);
		scanf("%f", &n1);

		printf("Aluno %d --> Digite sua segunda nota: ", i);
		scanf("%f", &n2);

		med = (n1 + n2) / 2;

		printf("Aluno %d --> Media final: %.2f\n", i, med);

		if (med >= 7) {
		 	aprovado++;
		 	printf("Aprovado\n");
		}
		if (med > 3 && med < 7) {
			exame++;
			printf("Exame\n");
		}
		if (med <= 3) {
			reprovado++;
			printf("Reprovado\n");
		}
		med_soma += med;
	}
	med_classe = med_soma / 6;

	printf("\n\n");
	printf("********************************************\n");
	printf("* Media aritmetica\t\t Mensagem  *\n");
	printf("* Ate 3\t\t\t\t Reprovado *\n");
	printf("* Entre 3 e 7\t\t\t  Exame    *\n");
	printf("* De 7 para cima\t\t Aprovado  *\n");
	printf("********************************************\n");
	printf("\n\n");
	printf("O total de alunos aprovados: %d\n", aprovado);
	printf("O total de alunos de exame: %d\n", exame);
	printf("O total de alunos reprovados: %d\n", reprovado);
	printf("Media de classe: %.2f\n", med_classe);




	system("pause");
	return 0;
}