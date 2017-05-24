#include <stdio.h>
#include <stdlib.h>

//하향식 프로그램을 개발하는 단계(2단계) 
int read_int() {
	int num;
	
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &num);
	
	return num;
}
void print_next(int n) {
	printf("\n%d의 바로 다음 정수는 %d이고", n, n+1);
}
void print_half(int n) {
	printf("\n%d의 반은 %.1f입니다.", n, n/2.0);
}

int main(int argc, char *argv[]) {
	int num;
	
	num = read_int();
	print_next(num);
	print_half(num);
	
	return 0;
}
