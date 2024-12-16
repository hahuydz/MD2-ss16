#include<stdio.h>
void deleteItem(int *arr, int index, int *length){
	for(int i = index; i < *length; i++){
		*(arr + i) = *(arr + i +1);
	}
	*length -= 1;
}
int main(){
	int arr[5] = {1,2,3,4,5};
	int length = 5;
	printf("Mang truoc khi xoa la: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	deleteItem(arr, 1, &length);
	printf("\n\nMang sau khi xoa la: ");
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
