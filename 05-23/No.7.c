#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int n; int m;
 int i, j;
 
 printf("정사각형의 한 변의 길이를 입력해주세요 : ");
 scanf("%d", &n);
 printf("진행 순서의 종류를 입력해주세요(1~3) : ");
 scanf("%d", &m);
   for(i=0; i<n; i++) { 
    for(j=0; j<n; j++) { 
      switch(m) {  
        case 1:  
          printf("%d", i+1);  
          break; 
        case 2: 
          if(i&1==1)  
            printf("%d", n-j); 
          else 
            printf("%d", j+1);   
          break;  
        case 3:  
          printf("%3d", (i+1)*(j+1));
          break;
        default:
          break;  
      } 
    } 
    printf("\n");
   } 
   
   return 0;
  }
