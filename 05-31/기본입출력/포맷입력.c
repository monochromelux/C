#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() 
{
	FILE *fp;
	char fname[100];
	char name[40];
	int number;

	printf("Input file name :"); 
	gets(fname) ;
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("\n could not open employee file");
		exit(1);
	}

	while(1)
	{
		if(fscanf (fp, "%d %s", &number, name) == EOF)
			break;
			
		printf("%d %s\n", number, name);
	}

	fclose(fp);
}
