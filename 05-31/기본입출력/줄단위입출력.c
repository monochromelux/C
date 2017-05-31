#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 10
main() //print_file1.c
{
	FILE *fp;
	char fname[100], ch;
	char temp[MAXCHAR];

	printf("Input file name :"); 
	gets(fname) ;
	
	if ( (fp = fopen(fname, "r")) == NULL ) {
		printf("파일 %s을(를) 열 수 없습니다. \n", fname);
		exit(1);
	}
	while (fgets(temp, MAXCHAR,fp) != NULL) {       /* end-of-file 검사 */
		printf("%s",temp);
		//puts(temp);  /* stdout에 문자 출력 */
		
	}
	/* 파일 닫기 */
	fclose(fp);
}
