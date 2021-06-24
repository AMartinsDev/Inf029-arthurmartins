#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b) {

	if( b == 0){

		return a;

	}
    
	MDC(b, a % b);
}


int main()
{   
	int num1 = 2 , num2 = 4;

	int result;

	result = MDC(num1, num2);

	printf("\n%d", result);

  	return 0;

} 
