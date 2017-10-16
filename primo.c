#include <stdio.h>


int primo(int n, int i) {

	if ((n%i)==0) return 0;
        if (i==n) return 1;
        return primo(n, i+1);
}	

int main() {

	
	printf("O número é: ");

	if(primo(4,2)==1) printf(" primo\n");
	else printf("não primo\n");
}
