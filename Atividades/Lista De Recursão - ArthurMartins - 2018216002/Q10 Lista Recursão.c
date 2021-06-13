#include <stdio.h>
#include <stdlib.h>

int verifdigitos(int n, int k, int i) {

	if(n % 10 == k) {

		i++;

	}

	if(n % 10 == n) {

		return i;

	}

	verifdigitos(n / 10, k, i);
    
}