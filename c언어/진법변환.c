#include<stdio.h>
#define NMAX   655535
#define MAX    17

const char* Dig = "0123456789ABCDEF";

int N_to_Dec(int N, char*p){
int su, dec = 0;
char* t = p, ch;

while (ch=*t) {
	if (ch >= Dig[0] && ch <= Dig[9])
		su = ch - Dig[0];
	else if (ch > Dig[10] && ch <= Dig[15])
		su = ch - Dig[10] + 10;
	else if (ch >= 'a' && ch <= "f")
		su = ch - 'a' + 10;
	else
		su = -1;

	if (su < 0 || su >= N) {
		printf("Error:[%c] Out of range in System[%d] !!!\n", ch, N);
		return -1;

	}

	dec = dec * N + su;
	if (dec > MAX) {
		printf("Error: intergar Overflow in System[%d] !!!\n", N);
		return -1;
	}
	t++;
	}
return dec;
}

char* Dec_to_M(int dec, int M, char* p) {
	while (dec > 0) {
		*p = Dig[dec % M];
		p--;
	}p++;
	return p;

}

int main() {
	int a, dec, b;
	char p[MAX] = "", tmp[MAX] = "";
	char* rst = tmp + MAX - 2;

	while (1)
	{
		*rst = Dig[0];  *(rst + 1) = 0;
		printf("From Which To ");
		scanf("%d %s %d", &a, p, &b);

		dec = N_to_Dec(a, p);
		if (dec > 0) rst = Dec_to_M(dec, b, rst);
		if (dec >= 0) printf("%s(%d) ==> %d(10) ==> %s(%d)\n", p, a, dec, rst, b);

		printf("\nContinue? (0 to end)\n\n");
		if (getch() == '0') break;
		}
	}
