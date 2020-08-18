#include<stdio.h>

int main() {
	int a = 30000;
	int b;
	scanf_s("%d", &b);
	if (b < 8) {
		printf("¹«·á");
	}
	else if (b >= 8 && b <60) {
		printf("%d", a);
	}
	else{
		printf("%d",(int)((double)a*0.75));
	}
}