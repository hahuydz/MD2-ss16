#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int num1 = 5, num2 = 10;
	swap(&num1, &num2);
	printf("%d", num1);
	printf("\n%d", num2);
	return 0;
}
