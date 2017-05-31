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
		printf("파일을 열 수 없습니다. \n" );
		exit(-1);
	}
	if ( (fp2 = fopen("score_out.txt", "w")) == NULL ) {
		printf("파일을(를) 열 수 없습니다. \n" );
		exit(-1);
	}
	while(1){
		ret = fscanf(fp1,"%d %s %d %d %d", &num, name, &kor, &eng, &mat);
		if ( ret == EOF ) break;
		sum = kor + eng + mat ;
		fprintf(fp2,"%d %s %d %d %d %d\n", num, name, kor, eng, mat, sum);
	}
	fclose(fp1);
	fclose(fp2);
}
