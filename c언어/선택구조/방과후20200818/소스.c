#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	if (a % 3 == 0 && a % 5 == 0) {
	printf("3�� ����̸鼭 5�� ��� �Դϴ�");
	}
	else if (a % 3 == 0) {
		printf("3�� ��� �Դϴ�");

	}

	else if (a % 5 == 0) {
		printf("5�� ��� �Դϴ�");
	}
	else {
		printf("�ƹ��͵� �ƴմϴ�");
	}
	
}