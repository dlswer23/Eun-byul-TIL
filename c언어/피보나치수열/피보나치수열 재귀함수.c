#include<stdio.h>

int main() {
	int temp;
	int n1 = 1, n2 = 1;
	int n;
	scanf("%d",&n);
	printf("1 1 ");
	for (int i = 2; i < n; i++) {
		temp = n2;
		n2 = n1 + n2;
		printf("%d ", n2);
		n1 = temp;
	}
}