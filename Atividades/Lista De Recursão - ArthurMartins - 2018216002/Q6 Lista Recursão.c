#include <stdio.h>
#include <stdlib.h>

int pot(int k, int n){

	if(n == 1){

		return k;
	}

	return k * pot(k, n - 1);
    
}


int main()
{   
	int num1 = 2 , num2 = 4;

	int result;

	result = pot(num1, num2);

	printf("\n%d", result);

  	return 0;

} 
