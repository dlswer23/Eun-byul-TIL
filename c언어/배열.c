#include<stdio.h>

void func(int* ptr);
int main(){
	int list[10] = {0,};
	func(list);
	for (int i = 0; i < 10; i++) printf("%d\n", list);
}
void func(int* ptr) {
	for (int i = 0; i < 10; i++) ptr[i] = 1;
}