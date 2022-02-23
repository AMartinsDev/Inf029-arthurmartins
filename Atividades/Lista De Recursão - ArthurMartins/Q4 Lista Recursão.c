#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vet[], int x){

	if(x == 1){

		return vet[0];

	}

	return vet[x - 1] + somarVetor(vet, x - 1);
}

int main()
{   
	int vet[5] ={1,2,3,4,5};

	int result;

	result = somarVetor(vet, 5);

	printf("\n%d", result);

  	return 0;

} 