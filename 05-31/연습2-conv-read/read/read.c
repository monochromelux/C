/* 비 형식 IO로 저장된 파일 읽기 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <conio.h>

main()
{
	struct sungjuk_struct {
	    int    num;
	    char   name[10];
	    int    kor;
	    int    eng;
	    int    mat;
	} sungjuk ;

	FILE *fp ;
	int ret;
	
	if ((fp = fopen("bin_score.txt", "rb")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	
    // 여기에 프로그램을 작성하시오. ---
	 
	 
    // --------------------------------- 
	fclose(fp);

}
