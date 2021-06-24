#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b) {

	if(a == 0 || b == 0){

		return 0;

	}

	if(b == 1){

		return a;

	}

	return a + multiplicacao(a, b - 1);

}

int main()
{   

	int result;

	result = multiplicacao(5, 5);

	printf("\n%d", result);

  	return 0;

} 