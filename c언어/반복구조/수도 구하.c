#include<stdio.h>

int main() {
	int a;
		
	while (1)
	{
		printf("\n 1.일본\n 2.미국\n 3.중국\n 4.한국\n 5.끝내기\n 수도를 알고 싶은 나라는?\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1: printf("일본의 수도는 도쿄 입니다\n");
			break;
		case 2: printf("미국의 수도는 워싱턴 입니다\n");
			break;
		case 3: printf("중국의 수도는 베이징 입니다\n");
			break;
		case 4: printf("한국의 수도는 서울 입니다\n");
			break;
		case 5: printf("끝내기를 선택하셨습니다\n");
			break;
		}
		if(a==5) break;
	}
} 