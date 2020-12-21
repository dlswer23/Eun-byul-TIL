#include<stdio.h>
#define MX 10

int main(void) {
	int i, temp,j;

	int arr[MX] = { 1,3,5,7,9,2,4,6,8,10 };

	for(i=9;i>0;i++){
		for (j = i + 1; j < i; j++) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}

	for (i = 0; i < MX; i++) {
		printf("%d ", arr[i]);
	}
}