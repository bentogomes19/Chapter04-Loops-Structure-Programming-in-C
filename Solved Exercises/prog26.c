#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int i, idade, soma1 = 0 , soma2 = 0, soma3 = 0, soma4;
	float peso, altura, media, perc, soma_altura = 0;
	char cor_cabelo, cor_olhos;
	soma4 = 0;

	for (i=1; i<=2; i++) {
		printf("Usuário %d --> Digite a sua idade: ", i);
		scanf("%d", &idade);

		printf("Usuário %d --> Digite o seu peso (kg): ", i);
		scanf("%f", &peso);

		printf("Usuário %d --> Digite a sua altura (m): ", i);
		scanf("%f", &altura);

		printf("Cor dos olhos\n");
		printf("A - Azul\n");
		printf("P - Preto\n");
		printf("V - Verde\n");
		printf("Usuário %d --> Digite a cor dos seus olhos (A, P ou V): ", i);
		scanf(" %c", &cor_olhos);
		cor_olhos=toupper(cor_olhos);

		printf("Cor do Cabelo\n");
		printf("C - Castanho\n");
		printf("L - Loiro\n");
		printf("R - Ruivo\n");
		printf("Usuário %d --> Digite a cor do seu cabelo (C, L ou R): ", i);
		scanf(" %c", &cor_cabelo);
		cor_cabelo=toupper(cor_cabelo);

		if (idade > 50 && peso < 60) {
			soma1 ++;
		}
		if (altura < 1.50) {
			soma_altura += altura;
			soma2 ++;
		}

		if (cor_olhos == 'A') {
			soma3 ++;
		}

		if (cor_cabelo == 'R' && cor_olhos != 'A') {
			soma4 ++;
		}

	}

	media = soma_altura / soma2;
	perc = ((float)soma3 / 2) * 100;

	printf("A quantidade de pessoas com idade superior a 50 anos e peso menor que 60kg -> %d\n", soma1);
	printf("A média das idades das pessoas com altura inferior a 1.50m -> %.2f\n", media);
	printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisdads -> %.2f\n", perc);
	printf("A quantidade de pessoas ruivas e que não possuem olhos azuis -> %d\n", soma4);

	system("pause");
	return 0;
}