#include<stdio.h>

void name(int a)
{
	if (a <= 0)
		return;
	printf("ÀÌÀºº°\n");
	name(a - 1);
}

int main() {
	int a;
	scanf("%d", &a);
	name(a);
}