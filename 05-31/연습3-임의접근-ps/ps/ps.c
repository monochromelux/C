/* ���Ͽ��� ���ϴ� ���ڵ带 �д� ���α׷� */ 
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
		printf("����� ���ڵ� ��ȣ �Ǵ� ��ġ���� -1 �Է�: ");
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
    
    printf("���� ��ġ : %ld\n", pos); 
	
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
