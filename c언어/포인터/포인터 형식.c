#include<stdio.h>

void main() {
	int i, a[10] = { 0,1,2,3,4,5,6,7,8,9 }, * ap = a;
	for (i = 0; i < 10; i++) {
		a[i] += 1;
		printf("%d", *ap + i);
	}
	printf("\n");
	printf("%d\t, %p\n", a[0], &a);
	printf("%d\t, %p\t,%p\n", *ap,ap,&ap);
	ap = &i;
	*ap = 30;
	printf("%d\t,%p\n", i, &i);
	printf("%d\t, %p\t,%p\n", *ap, ap, &ap);
}