#include<stdio.h>

int main() {
	int a;
	int i;
	scanf("%d", &a);
	for (int i = 0; i <= a; i++) {
	}
		if (a % 3) {
			printf("Â¦");
			if (a % 5 && a % 10) {
				printf("¸¸¼¼");
			}
			printf("%d\n", i);
		}
		
		
	}

