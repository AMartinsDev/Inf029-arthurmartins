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


int main()
{   

	int result;

	result = verifdigitos(555, 5, 0);

	printf("\n%d", result);

  	return 0;

} 
 