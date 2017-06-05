#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
	int tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(int argc, char *argv[]) {
	char c = 'A';
	printf("c�� �ּҰ� = %x\n", &c);
	printf("c�� �� = %c\n", c);
	
	int x = 5, y = 7;
	printf("swap �� : x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("swap �� : x = %d, y = %d\n", x, y);
	
	return 0;
}
