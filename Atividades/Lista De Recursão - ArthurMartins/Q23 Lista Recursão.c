#include <stdio.h>

int seqpadovan(int n){

	if(n == 0 || n == 1 || n == 2){

		return 1;
	}
    
	return seqpadovan(n - 2) + seqpadovan(n - 3);
}

int main()
{   

	int result;

	result = seqpadovan(6);

	printf("\n%d", result);

  	return 0;

} 