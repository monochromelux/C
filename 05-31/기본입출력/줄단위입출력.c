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
		printf("���� %s��(��) �� �� �����ϴ�. \n", fname);
		exit(1);
	}
	while (fgets(temp, MAXCHAR,fp) != NULL) {       /* end-of-file �˻� */
		printf("%s",temp);
		//puts(temp);  /* stdout�� ���� ��� */
		
	}
	/* ���� �ݱ� */
	fclose(fp);
}
