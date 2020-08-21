#include<stdio.h>
#include<stdio.h>

int main() {
	typedef struct {
		int sID;
		char name[10];
		int age;
		char telNo[20];
	}person;
	person student = { 1114,"LEE",
	17,"01042985098" };
	person* spt = &student;
	printf("%d\n", (spt)->sID);
	printf("%s\n", (spt)->name);
	printf("%d\n", (spt)->age);
	printf("%s\n", (spt)->telNo);

}