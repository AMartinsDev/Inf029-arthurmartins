#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], int x) {

	if(n == 1) {

		return vetor[0];
	}

	return vetor[x - 1] + somaVetor(vet, x - 1);