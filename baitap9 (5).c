#include<stdio.h>
void addItem(int *arr, int newValue, int index, int *length){
	*length += 1;
	for(int i = *length; i > index; i--){
		*(arr + i) = *(arr + i - 1);
	}
	*(arr + 1) = newValue;
}
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int length = 5;
	printf("Mang truoc khi them phan tu la: ");
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	addItem(arr, 10, 1, &length);
	printf("\n\nMang sau khi them phan tu la: ");
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
