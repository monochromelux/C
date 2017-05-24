#include <stdio.h>
#include <stdlib.h>

//동적 할당 

int main(int argc, char *argv[]) {
	
	int *p;
	int n, i;
	
	printf("몇개의 정수를 입력하고 싶으십니까? : ");
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("오류 : 정수 개수를 잘못 입력하셨습니다.\n프로그램을 종료합니다.");
		return -1; 
	} 
	
	p = (int *)malloc(n * sizeof(int));
	if(p == NULL) {
		printf("오류 : 메모리가 부족합니다.\n프로그램을 종료합니다.");
		return -1;
	}
	
	printf("%d개의 정수를 입력해주세요 : ", n);
	for(i=0; i<n; ++i) {
		scanf("%d", &p[i]);
	}
	
	printf("입력한 정수를 역순으로 출력합니다.\n");
	for(i=n-1; i>=0; --i) {
		printf(" %d", p[i]);
	}
	
	return 0;
}
