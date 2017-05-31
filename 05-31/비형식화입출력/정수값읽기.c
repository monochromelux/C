#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() 
{
	FILE *fp;
	int num, flag ;
	
	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		printf("\n could not open file");
		exit(1);
	}
 
 	while(1){
 		
		flag = fread(&num, sizeof(int), 1, fp);
		if( flag == 0 ) break;
		
		//if( num == EOF) break;
		
		printf("%d\n",num);
		
 	}
	
	fclose(fp);
}
