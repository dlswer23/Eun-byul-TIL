#include<stdio.h>

int main() {
	int a;
	int sum = 0;
	do{
		printf("정수입력(0 to puit):");
		scanf("%d",&a);
		sum += a;
	} while (a != 0);
	printf("%d", sum);
}