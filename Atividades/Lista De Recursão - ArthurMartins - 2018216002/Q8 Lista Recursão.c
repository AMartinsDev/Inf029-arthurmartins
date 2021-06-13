#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b) {

	if( b == 0){

		return a;

	}
    
	MDC(b, a % b);
}