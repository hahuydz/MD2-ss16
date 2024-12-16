#include<stdio.h>
void printArr(int arr[], int *arrPtr){
	for(int i = 0; i < 5; i++){
		printf("%d ", *(arrPtr+i));
	}
}
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *arrPtr = arr;
	printArr(arr, arrPtr);
}
