#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	if (a % 3 == 0 && a % 5 == 0) {
	printf("3의 배수이면서 5의 배수 입니다");
	}
	else if (a % 3 == 0) {
		printf("3의 배수 입니다");

	}

	else if (a % 5 == 0) {
		printf("5의 배수 입니다");
	}
	else {
		printf("아무것도 아닙니다");
	}
	
}