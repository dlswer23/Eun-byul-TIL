#include<stdio.h>

int* m_pnArr;
int i;

int Insert(int n) {
	m_pnArr[i] = n;
	i++;
	return 0;
}

int printData() {
	
	for (int j = 0; j < i; j++) {
		printf("%d", m_pnArr[j]);
	}
	return 0;
}

int main() {
	m_pnArr = new int[10];
	i = 0;

	Insert(1);
	Insert(2);
	Insert(3);

	printData();
}