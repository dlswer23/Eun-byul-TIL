#include<stdio.h>
#define MX 10

int main(void) {

	int arr[MX] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int j, temp, min;

	for (i = 0; i < MX; i++) {
		min = i;

		for (j = i + 1; j < MX; j++) {
			if (arr[min] < arr[j]) {
				min = j;
			}
		}

			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}

	for (int i = 0; i < MX; i++) {
		printf("%d ", arr[i]);
	}

}