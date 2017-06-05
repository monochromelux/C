#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int abc[] = {1, 3, 5, 7, 9};
	int *p = abc;
	int i, sum = 0;
	
	for(i=0; i<5; i++) {
		sum += *(p+i);
	}
	
	printf("%d + %d + %d + %d + %d = %d", *p, *(p+1), *(p+2), *(p+3), *(p+4), sum);
	
	return 0;
}
