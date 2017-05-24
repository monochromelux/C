#include <stdio.h>
#include <stdlib.h>

//프로시저 함수(void 함수)를 예시하기 위해 prototype.c를 변형 
int add1(int);
double half(int);
void print(int); 

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &num);
	print(num);
	
	return 0;
}

int add1(int x) {
	return (x+1);
}
double half(int x) {
	return (x/2.0);
}
void print(int x) {
	printf("\n%d의 바로 다음 정수는 %d이고\n%d의 반은 %.1f입니다.", x, add1(x), x, half(x));
	printf("\n제가 맞게 계산했나요?");
}
