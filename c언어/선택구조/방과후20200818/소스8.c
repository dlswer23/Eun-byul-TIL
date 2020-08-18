#include<stdio.h>

int main() {
	char a;
	int b;
	printf("성별을 입력하세요 : 예)여자: f 남자: m\n");
	scanf("%c", &a);

	do {
		printf("나이를 입력하세요 : ");
		scanf("%d",&b);
	} while (b <= 0);
		
	if (b >= 20) 		printf("성인");
	else		printf("미성년");
	
	if ((a == 'F')|| (a == 'f')) {
		printf("여성입니다");
	}
	else if ((a == 'M') || (a == 'm'))
	{
		printf("남성 입니다");
	}
}