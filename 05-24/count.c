#include <stdio.h>
#include <stdlib.h>

//정적변수의 사용 예를 보여주는 프로그램 
int count() {
	static int n = 0;
	
	return ++n;
}

int main(int argc, char *argv[]) {
	int i;
	
	for(i=0; i<5; ++i) {
		printf("count = %d\n", count());
	}
	
	return 0;
}
