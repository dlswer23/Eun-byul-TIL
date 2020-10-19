#include<stdio.h>
int rear = -1;
int front = -1;
int addq(int* ptr, int value);
int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) addq(arr, i);
	for (int i = 0; i < 10; i++) printf("%d", arr[i]);
	printf("\nrear: %d", rear);
}


int addq(int* ptr, int value) {
	if (rear >= 9) return printf("QUEUE is FULL!");
	else ptr[++rear] = value;
}