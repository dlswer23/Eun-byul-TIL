#include<stdio.h>

int main() {
	int sum = 0;
	for (int i = 0; i < 101; i++) {
		if (i % 2 == 0) {
			sum += i;
		
		}
		
	}
	printf("0�̻� 100������ ���� �߿��� ¦���� ��:");
	printf("%d\n", sum);
}