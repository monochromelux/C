#include <stdio.h>
#include <stdlib.h>

//배열 인수 전달

int sum(int a[10]) {
	
	int sum = 0, i;
	for(i=0; i<10; i++) {
		sum += a[i];
	}
	
	return sum;
} 

int main(int argc, char *argv[]) {
	
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("1 + 2 + ... + 9 + 10 = %d\n", sum(x));
	
	return 0;
}
