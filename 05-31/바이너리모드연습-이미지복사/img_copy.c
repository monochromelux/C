#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	
	FILE *fp1, *fp2;
	int c ;

    
    if ((fp1 = fopen("org_img.jpg", "r")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	if ((fp2 = fopen("copy_img.jpg", "w")) == NULL ){
		printf("file open error\n");
		exit(0);
	}
	while(1){
		//if( feof(fp1) != 0 ) break;
		c = fgetc(fp1);
		if ( c == EOF ) break;
		fputc( c, fp2 );
        
	}
	fclose(fp1);
	fclose(fp2);
}
