#include<stdio.h>
#define MX 10

int main(void) {
	int i, j, temp, min;

	int arr[MX] = { 10,9,8,7,6,5,4,3,2,1 };

	for (i = 0; i < MX; i++) {
		min = i;
		for (j = i + 1; j < MX; j++) {
			if (arr[min] > arr[j]) {
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