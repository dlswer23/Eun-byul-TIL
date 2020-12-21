#include<stdio.h>
#define MX 10

int main(void) {
	int i, j, temp, min;

	int arr[MX] = { 5,7,4,6,1,2,3,8,11,14 };

	for (i = 0; i < MX; i++) {
		min = i;
		for (j = i + 1; j < MX; j++) {
			if (arr[min] < arr[j]) {

				min = j;
				temp = arr[min];
				arr[min] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (i = 0; i < MX; i++) {
		printf("%d ", arr[i]);
	}
}