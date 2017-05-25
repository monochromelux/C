#include <stdio.h>
#include <stdlib.h>

//함수 프로토타입을 예시하기 위해 add1half.c를 변형 
int add1(int);
double half(int);

int main(int argc, char *argv[]) {
	int num;
	
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &num);
	
	printf("\n%d의 바로 다음 정수는 %d이고\n%d의 반은 %.1f입니다.", num, add1(num), num, half(num));
	printf("\n제가 맞게 계산했나요?");
	
	return 0;
}

int add1(int x) {
	return (x+1);
}
double half(int x) {
	return (x/2.0);
}
