/* �� ���� IO�� ����� ���� �б� */ 
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
	
	
	while(1){
		ret = fread(&sungjuk, sizeof(sungjuk), 1, fp) ;
		if( ret <= 0 ) break;
		
		printf("%d %s %d %d %d\n", sungjuk.num, sungjuk.name, 
								sungjuk.kor, sungjuk.eng, sungjuk.mat);
	}
	fclose(fp);

}
