#include<stdio.h>
void bubbleSort(int *arr){
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5 - i - 1; j++){
			if(*(arr + j) > *(arr + j + 1)){
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}
int main(){
	int arr[5] = {3, 5, 4, 2, 1};
	printf("Mang truoc sap xep la: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	bubbleSort(arr);
	printf("\n\nMang sau khi sap xep la ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
