/* ���� IO�� ����� ������  ������ IO�� �ٲ� */ 
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
	// ���⿡ ���α׷��� �ۼ��Ͻÿ�. ---
	 
	 
    // --------------------------------- 
	fclose(fp1);
	fclose(fp2);
	
}
