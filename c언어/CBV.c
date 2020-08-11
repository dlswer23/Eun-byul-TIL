#include<stdio.h>


int func(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
int main() {
	int n = 1,m = 2;
	func(&n, &m);
	printf("%d %d", n, m);
}