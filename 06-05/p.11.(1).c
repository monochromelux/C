#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int k = 0, i = 0, j = 0, m = 0, a[99] = {};
	
	k = 1;
	do {
		k++;
		a[k-2] = k;
	} while(k < 100);
	
	i = -1; //�������� 1���� �����ϳ� ���� �迭�� 0���� �����ϱ� ���� 
	j = 0;
	
	while(1) {
		i++;
		if(i > 99) {
			printf("%d", j);
			break;
		}
		if(a[i] == 0)	continue;
		j++;
		m = i; // (3)
		while(1) {
			m = m + a[i];
			if(m > 99)	break;
			a[m] = 0;
		}
	}
	
	return 0;
}
