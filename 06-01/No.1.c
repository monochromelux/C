#include <stdio.h>
#include <stdlib.h>

int square(int n) {
	int tmp;
	
	tmp = n * n;
	return tmp;
//	return n * n;
}

int compare(int x, int y) {
	int z;
	
	z = (x > y) ? x : y;
	return z;
}

int fact(int n) {
	/*int tmp = 1, i;
	
	for (i=1; i<=n; i++) {
		tmp *= i;
	}
	return tmp;*/
	if(n == 1) {
		return 1;
	}
	else {
		return n * fact(n-1);
	}
}

int sosu(int n) {
	int i;
	
	for (i=2; i<n; i++) {
		if(!(n % i)) {
			return 0;
		}
	}
	return 1;
} 

int main(int argc, char *argv[]) {
	int manu;
	int a, num1, num2, i, j;
	
	printf("메뉴를 선택해 주세요 >> ");
	scanf("%d", &manu);
	while(manu != 0) {
		switch(manu) {
			case 1:
				printf("제곱할 값을 입력해주세요 >> ");
				scanf("%d", &num1);
				
				//a = num1 * num1;
				a = square(num1);
				
				printf("%d * %d = %d\n", num1, num1, a);
				break;
				
			case 2:
				printf("크기를 비교할 값 2개를 입력해주세요 >> ");
				scanf("%d %d", &num1, &num2);
				
				//a = (num1 > num2) ? num1 : num2; 
				a = compare(num1, num2);
				
				printf("%d와 %d중 더 큰 수는 %d입니다.\n", num1, num2, a);
				break;
				
			case 3:
				printf("정사각형의 한 변의 길이를 입력해주세요 >> ");
				scanf("%d", &num1);
				
				for(i=0; i<num1; i++) {
					for(j=0; j<num1; j++) {
						printf("□");
					}
					printf("\n");
				}
				break;
			
			case 4:
				printf("팩토리얼을 구할 값을 입력해주세요 >> ");
				scanf("%d", &num1);
				
				a = fact(num1);
				
				printf("%d! = %d\n", num1, a);
				break;
			
			case 5:
				printf("소수인지 아닌지 판단할 수를 입력해주세요 >> ");
				scanf("%d", &num1);
				
				a = sosu(num1);
				
				if(a) {
					printf("%d은/는 소수입니다.\n", num1);
				} 
				else {
					printf("%d은/는 소수가 아닙니다.\n", num1);
				} 
				break;
			
			default:
				printf("잘못된 입력입니다.\n");
				break;
		}
		printf("메뉴를 선택해 주세요 >> ");
		scanf("%d", &manu);
	}
	
	return 0;
}
