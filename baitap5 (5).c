#include<stdio.h>
void updateArr(int *arr, int newValue, int index){
		if(index >= 0 && index <=5){
			*(arr + index) = newValue;
		}
		else{
			printf("\nVi tri khong hop le\n");
		}
}
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	printf("Mang truoc khi update: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	updateArr(arr, 0, 3);
	printf("\nMang sau khi update: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
