#include <stdio.h>
#include <stdlib.h>

//숫자를 하나 읽은 후, 양수와 음수를 판별 
int read_int() {
	int num;
	
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &num);
	
	return num;
}
void print_sign(int n) {
	printf("정수 %d은(는) ", n);
	if (n > 0) {
		printf("양수입니다.\n");
	}
	else if (n < 0) {
		printf("음수입니다.\n");
	}
	else {
		printf("양수도 음수도 아닙니다.\n");
	}
}

int main(int argc, char *argv[]) {
	int num;
	
	num = read_int();
	print_sign(num);
	
	return 0;
}
