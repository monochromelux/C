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
	
	printf("�޴��� ������ �ּ��� >> ");
	scanf("%d", &manu);
	while(manu != 0) {
		switch(manu) {
			case 1:
				printf("������ ���� �Է����ּ��� >> ");
				scanf("%d", &num1);
				
				//a = num1 * num1;
				a = square(num1);
				
				printf("%d * %d = %d\n", num1, num1, a);
				break;
				
			case 2:
				printf("ũ�⸦ ���� �� 2���� �Է����ּ��� >> ");
				scanf("%d %d", &num1, &num2);
				
				//a = (num1 > num2) ? num1 : num2; 
				a = compare(num1, num2);
				
				printf("%d�� %d�� �� ū ���� %d�Դϴ�.\n", num1, num2, a);
				break;
				
			case 3:
				printf("���簢���� �� ���� ���̸� �Է����ּ��� >> ");
				scanf("%d", &num1);
				
				for(i=0; i<num1; i++) {
					for(j=0; j<num1; j++) {
						printf("��");
					}
					printf("\n");
				}
				break;
			
			case 4:
				printf("���丮���� ���� ���� �Է����ּ��� >> ");
				scanf("%d", &num1);
				
				a = fact(num1);
				
				printf("%d! = %d\n", num1, a);
				break;
			
			case 5:
				printf("�Ҽ����� �ƴ��� �Ǵ��� ���� �Է����ּ��� >> ");
				scanf("%d", &num1);
				
				a = sosu(num1);
				
				if(a) {
					printf("%d��/�� �Ҽ��Դϴ�.\n", num1);
				} 
				else {
					printf("%d��/�� �Ҽ��� �ƴմϴ�.\n", num1);
				} 
				break;
			
			default:
				printf("�߸��� �Է��Դϴ�.\n");
				break;
		}
		printf("�޴��� ������ �ּ��� >> ");
		scanf("%d", &manu);
	}
	
	return 0;
}
