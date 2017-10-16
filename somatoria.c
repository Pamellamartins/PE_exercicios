#include <stdio.h>


int somaTR(int n, int parcial) {

	if(n==0) return parcial;
	parcial += n;
	return somaTR(n-1,parcial);
	
}

int main() {

	int parcial = 0;

	printf("A somatória é: %d\n", somaTR(3, 0));


}

