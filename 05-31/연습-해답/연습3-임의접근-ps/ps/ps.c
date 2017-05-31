/* 파일에서 원하는 레코드를 읽는 프로그램 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fp;

main()
{
	char s[100];
	int  rec_num;
	int ret;
	long pos;

	if ((fp = fopen("bin_score.txt", "rb")) == NULL ){
		printf("file open error\n");
		exit(0);
	}

	while(1){
		printf("출력할 레코드 번호 또는 마치려면 -1 입력: ");
		scanf("%d", &rec_num); fflush(stdin);
		
		printf("rec_num:%d\n", rec_num);
		if( rec_num == -1 ) break;
		
		print_struct( rec_num );
		pos = ftell (fp);
		printf("after read fd pointer : %ld\n", pos);
	}
	fclose(fp);
}
print_struct( int rec_num )
{
	struct sungjuk_struct {
	    int    num;
	    char   name[10];
	    int    kor;
	    int    eng;
	    int    mat;
	} sungjuk ;

	long pos;
	long read_pos;

    pos =(rec_num-1) * sizeof(sungjuk) ;
    
    printf("읽을 위치 : %ld\n", pos); 
	
	if (fseek(fp, pos, SEEK_SET) != 0 ){
		printf("seek error\n");
		return;
	}
	if ( fread(&sungjuk, sizeof(sungjuk), 1, fp) == 0 ){
        printf("read error!!\n") ;
    }
    else {
	   printf("%d %s %d %d %d\n", sungjuk.num, sungjuk.name, 
								sungjuk.kor, sungjuk.eng, sungjuk.mat);
    }
}
