#include<stdio.h>

int Fac(int n)
{
	if (n <= 1)
		return 1;
	return n * Fac(n - 1);
}

void main() {
	printf("%d", Fac(5));
}