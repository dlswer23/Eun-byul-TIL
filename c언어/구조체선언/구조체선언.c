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
	strcpy(p.name, "이은별");
	p.age = 17;
	strcpy(p.area, "대전");
	printf("%s\n%d\n%s\n", p.name, p.age, p.area);
	
}