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

	FILE *fp1 ;
	int ret, size;
	
	long pos ;

	if ((fp1 = fopen("bin_score.txt", "rb")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	
	size = sizeof(sungjuk);
	printf("size:%d\n", size);
	while(1){
		//if( feof(fp1) ) break;
		
		pos = ftell(fp1);
		ret = fread(&sungjuk, sizeof(sungjuk), 1, fp1) ;
		if( ret < 1 ) break;
		
		printf("pos:%ld %d %s %d %d %d\n", pos, sungjuk.num, sungjuk.name, 
								sungjuk.kor, sungjuk.eng, sungjuk.mat);
	}
	fclose(fp1);
	
	getch();
}
