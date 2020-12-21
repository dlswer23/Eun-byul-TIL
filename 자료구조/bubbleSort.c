#include<stdio.h>
#define MX 10

int main(void) {
	int arr[MX] = { 10,9,8,7,6,5,4,3,2,1 };

	int i, j, temp;

	for (i = 9; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}


		}
	}
	for (i = 0; i < MX; i++) {
		printf("%d ", arr[i]);
	}
}


















/*#include<stdio.h> 
#define MX 10

int main(void) {
	//	int arr[MX] = {10,9,8,7,6,5,4,3,2,1};
	int arr[MX] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, j, temp;
	for (i = 9; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < MX; i++) printf("%d ", arr[i]);
}*/