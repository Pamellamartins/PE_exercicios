#include <stdio.h>

int numDigTR(int n, int parcial) {

	if (n/10==0) return parcial + n;
	
	parcial += n%10;
	
	return numDigTR(n/10, parcial);
}


int main() {


	printf("A soma dos dígitos é: %d\n", numDigTR(143, 0));


}


