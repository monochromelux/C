#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int stu[5];
 int num[5];
 int apple[5];
 int sum = 0;
 int i;
 
 printf("학교의 수는 5개입니다.\n");
 printf("각 학교의 학생 수를 입력하세요 : ");
 for(i=0; i<5; i++) { 
 	scanf("%d", &stu[i]);
 }
 printf("각 학교에 배정할 사과 수를 입력하세요 : ");
 for(i=0; i<5; i++) { 
	 scanf("%d", &num[i]);
 } 
 for(i=0; i<5; i++) { 
	 apple[i] = num[i]%stu[i];
	 sum += apple[i];
 } 
 printf("남은 사과의 수는 %d개 입니다.", sum);
 
 return 0;
}
