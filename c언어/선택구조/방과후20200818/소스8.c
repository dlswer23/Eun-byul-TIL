#include<stdio.h>

int main() {
	char a;
	int b;
	printf("������ �Է��ϼ��� : ��)����: f ����: m\n");
	scanf("%c", &a);

	do {
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d",&b);
	} while (b <= 0);
		
	if (b >= 20) 		printf("����");
	else		printf("�̼���");
	
	if ((a == 'F')|| (a == 'f')) {
		printf("�����Դϴ�");
	}
	else if ((a == 'M') || (a == 'm'))
	{
		printf("���� �Դϴ�");
	}
}