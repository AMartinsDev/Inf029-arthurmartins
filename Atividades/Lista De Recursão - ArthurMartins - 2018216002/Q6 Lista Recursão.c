#include <stdio.h>
#include <stdlib.h>

int pot(int k, int n){

	if(n == 1){

		return k;
	}

	return k * pot(k, n - 1);
    
}
