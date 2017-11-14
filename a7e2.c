#include <stdio.h>
#include <string.h>

int main()
{
	FILE * fp;
	char string[100] = "hello world";

	fp = fopen("arquivo.txt", "w");
	fwrite(string, sizeof(char), strlen(string), fp);

	return 0;
}
