#include<stdio.h>

void Name(int n) {
	if (n < 1)
		return;
	Name(n - 1);
	printf("ÀÌÀºº°\n");
}
void main() {
	Name(5);
 }