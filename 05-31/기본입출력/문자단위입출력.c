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
		printf("���� %s��(��) �� �� �����ϴ�. \n", fname);
		exit(1);
	}
	while ((ch=(char)fgetc(fp)) != EOF ) {  /* end-of-file �˻� */
		
		putchar(ch);  /* stdout�� ���� ��� */
		
	}
	/* ���� �ݱ� */
	fclose(fp);
}
