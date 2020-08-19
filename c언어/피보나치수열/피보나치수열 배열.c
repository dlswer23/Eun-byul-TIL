#include<stdio.h>

int main() {
	int fibo[100];
	int i;
	fibo[0] = fibo[1] = 1;
	for (i = 2; i < 100; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		{
			for (i = 0; i < 100; i++) {
				printf("%d ", fibo[i]);
			}
		}
	}

}