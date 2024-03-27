#include <stdio.h>
#include <stdlib.h>

/*4. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. */

int main() {
	int i, k, cod, nr_veiculos, nr_acidentes, maior, menor, med, med_acidente, soma_acidentes, soma_veiculos;
	int cid_maior, cid_menor, med_veiculos, soma1;
	soma_acidentes = 0;
	soma_veiculos = 0;
	soma1 =0;
	k = 0;

	for (i=1; i<= 5; i++) {
		printf("Digite o codigo da cidade %d : ", i);
		scanf("%d", &cod);
		printf("\n\n");
		printf("Cidade %d | Codigo #%d --> Digite o numero de veiculos de passeio : ", i, cod);
		scanf("%d", &nr_veiculos);

		printf("Cidade %d | Codigo #%d --> Digite o numero de acidentes de transito com vitimas : ", i, cod);
		scanf("%d", &nr_acidentes);
		if(i == 1) {
			maior = nr_acidentes;
			menor = nr_acidentes;
			cid_maior = cod;
			cid_menor = cod;
		}
		if (nr_veiculos > maior) {
			maior = nr_acidentes;
			cid_maior = cod;
		}
		if (nr_veiculos < menor) {
			menor = nr_acidentes;
			cid_menor = cod;
		}
		soma_acidentes += nr_acidentes;
		soma_veiculos += nr_veiculos;

		if (nr_veiculos < 2000) {
			soma1 += nr_acidentes;
			k++;
		}
	}

	med_veiculos = soma_veiculos / 5;
	med_acidente = soma1 / k;
	printf("\n\n");
	printf("Total de veiculos nas 5 cidades: %d\n", soma_veiculos);
	printf("Total de acidentes nas 5 cidades: %d\n", soma_acidentes);
	printf("Media de veiculos nas 5 cidades : %d\n", med_acidente);
	printf("Cidade com maior indice de acidentes Cidade Cod# %d | Total de acidentes: %d\n", cid_maior, maior);
	printf("Cidade com menor indice de acidentes Cidade Cod# %d | Total de acidentes: %d\n", cid_menor, menor);
	printf("A media de acidentes nas cidades com menos de 2000 : %d\n", med_acidente);

	system("pause");
	return 0;
}