#include <stdio.h>
#include <string.h>

void cat(char *name);

int main( int argc, int** argv)
{
	if (argc<2) { 
		printf("Uso %s<nome do arquivo>\n", argv[0]);
		return -1;
	}

	cat(argv[1]);
	return 0;
}

#define MAXLEN 5000

void cat(char *name)
{
	FILE * fp;
	char buf[MAXLEN];

	fp = fopen(name, "r");

	while (fgets(buf,MAXLEN,fp)) {
		fputs(buf, stdout);
	}
}
	
