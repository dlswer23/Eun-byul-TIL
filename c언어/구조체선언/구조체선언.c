#include<stdio.h>
#include<string.h>

struct person {
	char name[10];
	int age;
	char area[6];
};

int main() {
	struct person p;
	struct person* pp;
	strcpy(p.name, "������");
	p.age = 17;
	strcpy(p.area, "����");
	printf("%s\n%d\n%s\n", p.name, p.age, p.area);
	
}