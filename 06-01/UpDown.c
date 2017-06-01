#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random() {
	int ran_num;
	srand((unsigned int)time(NULL));
	ran_num = rand() % 100 + 1;
	return ran_num;
} 

int main(int argc, char *argv[]) {
	int re = 0, num, n, i = 0;
	num = random();
	
	while(re != 1) {
		printf("값을 입력해주세요 >> ");
		scanf("%d", &n);
		
		if(n == num) {
			printf("정답입니다!\n");
			re = 1;
		}
		else if(n > num) {
			printf("%d보다 작은 값입니다.\n", n);
			i++;
		}
		else if(n < num) {
			printf("%d보다 큰 값입니다.\n", n);
			i++;
		}
		else {
			printf("잘못된 입력입니다.\n");
		}
	}
	printf("%d회 만에 정답을 맞추셨습니다.", i);
	
	return 0;
}
