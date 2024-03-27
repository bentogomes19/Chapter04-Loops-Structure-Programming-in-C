#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, id, soma_id, qtd_id_18, media_idade, soma_peso;
	float med_id, med_peso, med_altura, peso, altura, soma_altura;
	qtd_id_18 = 0;
	soma_altura = 0;
	soma_peso = 0;

	for (i=1; i<=5; i++) {
		printf("Time %d\n\n", i);
		media_idade = 0;
		for (j=1; j<=11; j++) {
			printf("Jogador %d >> Digite sua idade: ", j);
			scanf("%d", &id);

			printf("Jogador %d >> Digite o seu peso (Kg): ", j);
			scanf("%f", &peso);

			printf("Jogador %d >> Digite a sua altura (m): ", j);
			scanf("%f", &altura);

			if (id < 18) {
				qtd_id_18++;
			}
			if (peso > 80) {
				soma_peso++;
			}
			media_idade+= id;
			soma_altura += altura;
		}

		med_id = media_idade / 2;
		printf("Media das idades: %.2f anos\n", med_id);
	} 
	med_altura = soma_altura / 6;
	printf("Jogadores menores de 18 anos: %d\n", qtd_id_18);
	printf("Media das alturas de todos os jogadores do campeonato: %.2f\n", med_altura);
	printf("Jogadores com mais de 80kg: %d\n", soma_peso);
	system("pause");
	return 0;

}