#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() //print_file1.c
{
	FILE *fp;
	char fname[100], ch;

	printf("Input file name :"); 
	gets(fname) ;
	
	if ( (fp = fopen(fname, "r")) == NULL ) {
		printf("파일 %s을(를) 열 수 없습니다. \n", fname);
		exit(1);
	}
	while ((ch=(char)fgetc(fp)) != EOF ) {  /* end-of-file 검사 */
		
		putchar(ch);  /* stdout에 문자 출력 */
		
	}
	/* 파일 닫기 */
	fclose(fp);
}
