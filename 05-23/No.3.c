#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
 int i, j; 
 char s = '*'; 
 /*for(i=0; i<16; i++) 
   {  printf("%c\n", s); 
   Sleep(1000);  
   printf("%c%c\n", s, s);  
   Sleep(1000); 
   printf("%c%c%c\n", s, s, s); 
   Sleep(1000);  
   printf("%c%c%c%c\n", s, s, s, s); 
   Sleep(1000);  
   printf("%c%c%c%c%c\n", s, s, s, s, s); 
   Sleep(1000);  
   printf("%c%c%c%c\n", s, s, s, s);  
   Sleep(1000);  
   printf("%c%c%c\n", s, s, s);
   Sleep(1000);     printf("\n"); 
   Sleep(1000); 
   } 
   printf("%c%c\n", s, s); 
   Sleep(1000); 
   }*/ 
 
 int num = 0; 
 for(i=0; i<100; i++) { 
   num = i%4;  
   if((i/4)&1) { 
     num = 4-num; 
   } 
   for (j=0; j<=num; j++) { 
    printf("%c", s);  
   } 

 return 0;
}
