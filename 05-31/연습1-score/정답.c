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
		printf("������ �� �� �����ϴ�. \n" );
		exit(-1);
	}
	if ( (fp2 = fopen("score_out.txt", "w")) == NULL ) {
		printf("������(��) �� �� �����ϴ�. \n" );
		exit(-1);
	}
    // ���⿡ ���α׷��� �ۼ��Ͻÿ�. ---
	 
	fprintf(stdout, "�й�  �̸�    ���� ���� ����  ����\n");
	fprintf(fp2, "�й�  �̸�    ���� ���� ����  ����\n");
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
