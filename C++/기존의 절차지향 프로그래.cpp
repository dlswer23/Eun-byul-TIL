#include<stdio.h>

//제작자 코드
typedef struct USERDATA {
	int nAge;
	char szName[32];

} USERDATA;

//사용자 코드
int main() {
	USERDATA user = { 20,"철수" };
	printf("%d %s\n", user.szName);
	return 0;
}