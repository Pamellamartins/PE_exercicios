#include <stdio.h>
#include <stdlib.h>

typedef struct simples {
	int x;
	char y;
} simples;
int main() 
{	
	simples v[2];
	FILE * fp;
	
	fp = fopen("arquivo.bin","wb");
	
	v[0].x = 1;
	v[0].y = 'A';	
	v[1].x = 2;
	v[1].y = 'B';
	
	fwrite( v, sizeof(simples), 2, fp);
	fclose(fp);
	
	fp = fopen("arquivo.bin","rb");
	
	v[0].x = 0;
	v[1].x = 10;
	
	fread(v, sizeof(simples), 2, fp);
	
	fclose(fp);
	
	printf("%d %c %d %c\n", v[0].x, v[0].y, v[1].x, v[1].y);
	
	return 0;

}

	
