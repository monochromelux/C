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
	while(1){

        ret = fscanf(fp1,"%d%s%d%d%d", &sungjuk.num, sungjuk.name, 
								&sungjuk.kor, &sungjuk.eng, &sungjuk.mat);
	    if ( ret == EOF ){
		   break;
	    }
		fwrite(&sungjuk, sizeof(sungjuk), 1, fp2) ;
		printf("%d %s %d %d %d\n", sungjuk.num, sungjuk.name, 
								sungjuk.kor, sungjuk.eng, sungjuk.mat);
	}
	fclose(fp1);
	fclose(fp2);
	
}
