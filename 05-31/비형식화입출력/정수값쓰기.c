#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() 
{
	FILE *fp;
	int num ;
	
	if ((fp = fopen("test.txt", "w")) == NULL)
	{
		printf("\n could not open file");
		exit(1);
	}
 
 	while(1){
 		printf("파일에 쓸 정수 입력 (끝내기:0입력): ");
		scanf("%d", &num);
		if( num == 0 ) break ;
		fwrite(&num, sizeof(int), 1, fp);
		
 	}
	
	fclose(fp);
}
