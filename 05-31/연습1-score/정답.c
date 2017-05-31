#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
	FILE *fp1, *fp2;

	int num, ret, i ;
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
    // 여기에 프로그램을 작성하시오. ---
	 
	fprintf(stdout, "학번  이름    국어 수학 영어  총점\n");
	fprintf(fp2, "학번  이름    국어 수학 영어  총점\n");
	while(1)
	{
		if(fscanf (fp1, "%d %s %d %d %d", &num, name, &kor, &mat, &eng) == EOF)
			break;
		sum = kor+mat+eng;
		fprintf(stdout, "%-5d %4s %4d %4d %4d %6d\n", num, name, kor, mat, eng, sum);
		fprintf(fp2, "%-5d %4s %4d %4d %4d %6d\n", num, name, kor, mat, eng, sum);
	}
	 
    // --------------------------------- 
	fclose(fp1);
	fclose(fp2);
}
