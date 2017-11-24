#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap( int *v, int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
	
}

int partition(int *v, int low, int high)
{
	int pivot = v[high];
	int j, i = low;
	
	for (j=low; j<high; j++) {
		if (v[j]<=pivot) {
			swap(v, i, j);
			i++;
		}
	}
	
	swap(v, i, high);
	
	return i;
	
}			

void quicksort(int *v, int low, int high)
{
	int p;

	if(low<high) {
		p = partition(v, low, high);
		quicksort(v, low, p-1);
		quicksort(v, p+1, high);
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
	
	quicksort(v, 0, 10-1);
	
	for(int i=0; i<10; i++) {
		printf("%d ", v[i]);
	}
	
}
