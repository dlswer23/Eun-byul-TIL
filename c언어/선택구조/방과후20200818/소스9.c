#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 2:
		printf("2���� �ϼ��� 28�� �Դϴ�");
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf(" %d���� �ϼ��� 31�� �Դϴ�", a);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d���� �ϼ��� 30�� �Դϴ�", a);
		break;
	}
}