#include<stdio.h>

int findCharacter(int *arr, int character) {
    for(int i = 0; i < 6; i++) {
        if(*(arr + i) == character) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[6] = {1, 2, 4, 5, 6, 7};  
    int index = findCharacter(arr, 7);  

    if(index != -1) { 
        printf("Phan tu co vi tri: %d\n", index);  
    } else {
        printf("Phan tu khong ton tai\n");
    }
    return 0;
}

