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
		printf("���� �Է����ּ��� >> ");
		scanf("%d", &n);
		
		if(n == num) {
			printf("�����Դϴ�!\n");
			re = 1;
		}
		else if(n > num) {
			printf("%d���� ���� ���Դϴ�.\n", n);
			i++;
		}
		else if(n < num) {
			printf("%d���� ū ���Դϴ�.\n", n);
			i++;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}
	printf("%dȸ ���� ������ ���߼̽��ϴ�.", i);
	
	return 0;
}
