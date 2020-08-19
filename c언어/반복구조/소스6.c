#include<stdio.h>

int main() {
	int sum = 0;
	for (int i = 0; i < 101; i++) {
		if (i % 2 == 0) {
			sum += i;
		
		}
		
	}
	printf("0이상 100이하의 정수 중에서 짝수의 합:");
	printf("%d\n", sum);
}