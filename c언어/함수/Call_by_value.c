#include<stdio.h>

void Swap1(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("Swap1���� %d %d\n", n1, n2);
}

void main() {
	int num1 = 10;
	int num2 = 20;
	printf("�ʱⰪ:%d %d\n", num1, num2);
	Swap1(num1, num2);
	printf("Swap1�� %d %d\n", num1, num2);
}