/* 형식 IO로 저장된 파일을  비형식 IO로 바꿈 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
	struct sungjuk_struct {
	    int    num;
	    char   name[10];
	    int    kor;
	    int    eng;
	    int    mat;
	} sungjuk ;

	FILE *fp1, *fp2;
	int ret;

	if ((fp1 = fopen("score.txt", "r")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	if ((fp2 = fopen("bin_score.txt", "wb")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	// 여기에 프로그램을 작성하시오. ---
	 
	 
    // --------------------------------- 
	fclose(fp1);
	fclose(fp2);
	
}
