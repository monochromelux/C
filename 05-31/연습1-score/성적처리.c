#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	FILE *fp1, *fp2;

	int num, ret ;
	char name[20];
	int kor, eng, mat, sum ;
	
	if ( (fp1 = fopen("score.txt", "r")) == NULL ) {
		printf("������ �� �� �����ϴ�. \n" );
		exit(-1);
	}
	if ( (fp2 = fopen("score_out.txt", "w")) == NULL ) {
		printf("������(��) �� �� �����ϴ�. \n" );
		exit(-1);
	}
    // ���⿡ ���α׷��� �ۼ��Ͻÿ�. ---
	 
	 
    // --------------------------------- 
	fclose(fp1);
	fclose(fp2);
}
