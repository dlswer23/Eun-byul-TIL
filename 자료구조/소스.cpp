#include<stdio.h>

void del(int* ptr, int index);
void add(int* ptr, int index, int value);

int main() {
	int arr[10] = { 0,1,2,4,5,6,7,8,9 };
	add(arr, 3, 3);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	del(arr, 3);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
}

void add(int* ptr, int index, int value) {
	for (int i = 9; i > index; i--) ptr[i] = ptr[i - 1];
	ptr[index] = value;
}

void del(int* ptr, int index, int value) {
	for (int i = index; i < 10; i++) ptr[i] = ptr[i + 1];
	ptr[9] = 0;
}