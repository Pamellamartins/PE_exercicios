#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swap(int *v, int j)
{
	int temp;
	
	temp = v[j];
	v[j] = v[j-1];
	v[j-1] = temp;
	
	
}
	

void insert(int *v, int n) 
{
	int i, j;
	
	for (i=1; i<n; i++) {
		for (j=i; j>0; j--) {
			while(v[j-1]>v[j]) {
				swap(v, j);
			}
		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", v[i]);
	}
}

int main() {

	int v[10];
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++) {
		v[i] = rand()%10+1;
	}
	
	for(int i=0; i<10; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
	
	insert(v, 10);
}
		
