#include<stdio.h>

//������ �ڵ�
typedef struct USERDATA {
	int nAge;
	char szName[32];

} USERDATA;

//����� �ڵ�
int main() {
	USERDATA user = { 20,"ö��" };
	printf("%d %s\n", user.szName);
	return 0;
}