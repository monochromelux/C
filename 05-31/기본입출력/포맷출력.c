#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() 
{
	FILE *fp;
	char fname[100];
	char name[40];
	int number=1;

	printf("Input file name :"); 
	gets(fname) ;
	if ((fp = fopen(fname, "w")) == NULL)
	{
		printf("\n could not open employee file");
		exit(1);
	}

	while(1)
	{
		printf("%d번째 이름 입력: ", number);
		gets(name);
		if (strlen(name) == 0)   
		      break;	      
		fprintf(fp, "%d %s\n", number, name);
		number++;	  
	}

	fclose(fp);
}
