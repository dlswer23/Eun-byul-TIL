#include<stdio.h>

int main() {
	int a;
		
	while (1)
	{
		printf("\n 1.�Ϻ�\n 2.�̱�\n 3.�߱�\n 4.�ѱ�\n 5.������\n ������ �˰� ���� �����?\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1: printf("�Ϻ��� ������ ���� �Դϴ�\n");
			break;
		case 2: printf("�̱��� ������ ������ �Դϴ�\n");
			break;
		case 3: printf("�߱��� ������ ����¡ �Դϴ�\n");
			break;
		case 4: printf("�ѱ��� ������ ���� �Դϴ�\n");
			break;
		case 5: printf("�����⸦ �����ϼ̽��ϴ�\n");
			break;
		}
		if(a==5) break;
	}
} 