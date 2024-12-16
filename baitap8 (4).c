#include<stdio.h>
#include<string.h>
void reverse(char *inputString, char *reverseString, int length){
	int j = 0;
	for(int i = length - 1; i >= 0; i--){
		*(reverseString + j++) = *(inputString + i);
	}
	*(reverseString + j) = '\0';
}
int main(){
	char inputString[500], reverseString[500];
	printf("Nhap chuoi: ");
	fgets(inputString, 500, stdin);
	int length = strlen(inputString);
	if(inputString[length - 1] == '\n'){
		inputString[length - 1] = '\0';
		length--;
	}
	reverse(inputString, reverseString, length);
	printf("\nChuoi ban dau la: %s", inputString);
	printf("\n\nChuoi dao nguoc la: %s", reverseString);
	return 0;
}
