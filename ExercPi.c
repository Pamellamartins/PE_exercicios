#include <stdio.h>
#include <math.h>

int func_fatorial (int num);
double func_soma (int k);
double func_pi (int k);

int main() {

	
	int k;
	
		printf("Digite parametro k: ");
		scanf("%d", &k);	

		printf("Pi tem valor %lf", func_pi(k));

	return 0;

}




int func_fatorial (int num) { 

	int cont, fatorial=1;

	for(cont=1; cont<=num; cont++) {
		
		fatorial *= cont;
		
	}

		return fatorial;

}

double func_soma (int k) {

	int c=0, nom=1, denom=1;
	double soma=0;

	for(c=0; c<=k; c++) {

		nom = (func_fatorial(4*k))*(1103+26390*k);
		denom = (pow(func_fatorial(k), 4)*pow(396, 4*k));
		soma += nom/denom;
	}
	
	return soma;
}

double func_pi (int k) {

	double pi;

	pi = (2*sqrt(2)/9801)*(func_soma(k));

	return 1.0/pi;
}

