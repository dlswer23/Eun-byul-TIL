#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 2:
		printf("2월의 일수는 28일 입니다");
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf(" %d월의 일수는 31일 입니다", a);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d월의 일수는 30일 입니다", a);
		break;
	}
}