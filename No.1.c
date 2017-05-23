#include <stdio.h>
#include <stdlib.h>

int a = 1;
static int b = 2; 

int main(int argc, char *argv[]) {

 static int c = 3; 
 printf(%d %d %d, a, b, c);  
 
 return 0;
 }
