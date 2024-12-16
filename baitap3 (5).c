#include<stdio.h>
void swap(int *x, int *y, int *sum){
	*sum = *x + *y;
}
int main(){
	int a = 5, b =15, sum = 0;
	swap(&a, &b, &sum);
	printf("a: %d\n", sum);
	return 0;
	
}
