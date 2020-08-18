#include<stdio.h>

int main() {
	char a, b;
	scanf("%c %c", &a, &b);

	if (a >= 'a' && a <= 'z') {
		for (char i = a; i <= 'z'; i++) {
			printf("%c ", i);
		}
	}
	 if (a >= 'A' && a <= 'Z') {
		for (char i = a; i <= 'Z'; i++) {
			printf("%c ", i);
		}
	}

	if (b >= 'a' && b <= 'z') {
		for (char i = 'a'; i <= b; i++) {
			printf("%c ", i);
		}
	}
	 if (b >= 'A' && b <= 'Z') {
		for (char i = 'A'; i <= b; i++) {
			printf("%c ", i);
		}
	}
	return 0;
}