#include <stdio.h>
#include <stdlib.h>

void say(int x) {
	if(x == 1) {
		printf("hello! :) \n");
	}
	else if(x == 2) {
		printf("bye! :> \n");
	}
}
double half(int x) {
	return (x/2.0);
}

int main(int argc, char *argv[]) {
	
	int x=0, y=0;
	say(1);
	
	scanf("%d", &y);
	printf("%f \n", half(y));
	
	say(2);
	
	return 0;
}
