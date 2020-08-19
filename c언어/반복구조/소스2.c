#include<stdio.h>

int main() {
	int a;
	int sum = 1;
	scanf("%d", &a);
	while (sum<=a)
	{
		printf("%d ", 3 * sum++);
	}
}