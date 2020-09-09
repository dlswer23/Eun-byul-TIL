#include<stdio.h>

//제작자 코드
typedef struct USERDATA {
	int nAge;
	char szName[32];

} USERDATA;

void PrintData(USERDATA* pUser) {
	printf("%d %s\n", pUser->nAge, pUser->szName);
}

//사용자 코드
int main() {
	USERDATA user = { 20,"철수" };
	printf("%d %s\n", user.nAge, user.szName); //1단계
	PrintData(&user);                //2단계
	return 0;
}